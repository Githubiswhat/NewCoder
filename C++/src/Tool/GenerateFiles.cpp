//
// Created by windows on 2023/3/2.
//

#include "GenerateFiles.h"

namespace fs = std::filesystem;

void GenerateFiles::create_cpp_file(int i, int j, string path) {
    for (; i <= j; ++i) {
        string file_cpp = path + '/' + "Solution" + to_string(i) + ".cpp";
        // 创建一个名为 example.txt 的文件
        if (std::filesystem::exists(file_cpp)) {
            continue;
        }
        std::ofstream file(file_cpp);
        string context = "//\n"
                         "// Created by windows on 2023/3/10.\n"
                         "//\n"
                         "\n"
                         "#include \"Solution" + to_string(i) + ".h\"";
        if (file.is_open()) {
            file << context << std::endl; // 向文件中写入内容
            file.close(); // 关闭文件
            std::cout << "File created successfully." << std::endl;
        } else {
            std::cout << "Failed to create file." << std::endl;
        }
    }
}

void GenerateFiles::create_h_file(int i, int j, string path) {

    for (; i <= j; ++i) {
        string file_h = path + '/' + "Solution" + to_string(i) + ".h";
        // 创建一个名为 example.txt 的文件
        if (std::filesystem::exists(file_h)) {
            continue;
        }
        string context = "//\n"
                         "// Created by windows on 2023/3/2.\n"
                         "//\n"
                         "\n"
                         "#ifndef C___SOLUTION_H\n"
                         "#define C___SOLUTION_H\n"
                         "\n"
                         "\n"
                         "class Solution{\n"
                         "\n"
                         "};\n"
                         "\n"
                         "\n"
                         "#endif //C___SOLUTION_H";
        std::ofstream file(file_h);
        if (file.is_open()) {
            file << context << std::endl; // 向文件中写入内容
            file.close(); // 关闭文件
            std::cout << "File created successfully." << std::endl;
        } else {
            std::cout << "Failed to create file." << std::endl;
        }
    }
}

int GenerateFiles::generate_files(int i, int j) {
    for (; i <= j; i += 100) {
        string str = "Solution" + to_string(i) + "_" + to_string(i + 99);
        fs::path dir(str); // 创建一个名为 example 的文件夹
        if (fs::create_directory(dir)) {
            std::cout << "Directory created successfully." << std::endl;
        } else {
            std::cout << "Failed to create directory." << std::endl;
        }
        create_cpp_file(i, i + 99, str);
        create_h_file(i, i + 99, str);
        create_CMake_file(i, i + 99 ,str);
    }
    return 0;
}

void GenerateFiles::create_CMake_file(int i, int j, string path) {
    string cmake_file = path + "/CMakeLists.txt";
    if (std::filesystem::exists(cmake_file)) {
        return;
    }
    string context = "add_library(" + path + " ";
    for (; i <= j; ++i) {
        context += "Solution" + to_string(i) + ".cpp ";
        context += "Solution" + to_string(i) + ".h ";
    }
    context += ")";
    std::ofstream file(cmake_file);
    if (file.is_open()) {
        file << context << std::endl; // 向文件中写入内容
        file.close(); // 关闭文件
        std::cout << "File created successfully." << std::endl;
    } else {
        std::cout << "Failed to create file." << std::endl;
    }
}
