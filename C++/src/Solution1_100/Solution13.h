//
// Created by windows on 2023/3/2.
//

#ifndef C___SOLUTION_H
#define C___SOLUTION_H


#include "../Tool/TreeNode.h"
#include <algorithm>
using namespace std;

class Solution{
public:
    /**
     *
     * @param root TreeNode类
     * @return int整型
     */
    int maxDepth(TreeNode* root) {
        return maxDepth(root);
    }

    int dfs(TreeNode* root){
        if (root == nullptr){
            return 0;
        }
        int left = dfs(root->left) + 1;
        int right = dfs(root->right) + 1;
        return left > right ? left : right;
    }

};


#endif //C___SOLUTION_H
