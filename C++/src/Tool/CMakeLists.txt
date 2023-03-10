# 构建可执行文件
add_executable(Tool main.cpp GenerateFiles.h GenerateFiles.cpp ListNode.cpp ListNode.h TreeNode.cpp TreeNode.h)

set(LIBRARY
        Solution1_100
        Solution101_200
        Solution201_300
        Solution301_400
        Solution401_500
        Solution501_600
        Solution601_700
        Solution701_800
        Solution801_900
        Solution901_1000
        Solution1001_1100
        Solution1101_1200
        Solution1201_1300
        Solution1301_1400
        Solution1401_1500
        Solution1501_1600
        Solution1601_1700
        Solution1701_1800
        Solution1801_1900
        Solution1901_2000
        Solution2001_2100
        Solution2101_2200
        Solution2201_2300
        Solution2301_2400
        Solution2401_2500
        Solution2501_2600
        Solution2601_2700
        Solution2701_2800
        Solution2801_2900
        Solution2901_3000
        )

# 添加库文件链接
target_link_libraries(Tool PRIVATE ${LIBRARY})
