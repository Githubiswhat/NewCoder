//
// Created by windows on 2023/3/2.
//

#ifndef C___GENERATEFILES_H
#define C___GENERATEFILES_H

#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
using namespace std;

class GenerateFiles {
public:
    void create_cpp_file(int i, int j, string path);
    void create_h_file(int i, int j, string path);
    void create_CMake_file(int i, int j, string path);
    int generate_files(int i, int j);

};

#endif //C___GENERATEFILES_H
