//
// Created by windows on 2023/3/2.
//

#ifndef C___SOLUTION_H
#define C___SOLUTION_H


#include "../Tool/TreeNode.h"

class Solution{
public:
    /**
     *
     * @param root TreeNode类
     * @param sum int整型
     * @return bool布尔型
     */
    bool hasPathSum(TreeNode* root, int sum) {
        return dfs(root, sum);
    }

    bool dfs(TreeNode* root, int sum){
        if (root == nullptr){
            return false;
        }
        if (root->left == nullptr && root->right == nullptr){
            return sum - root->val == 0;
        }
        bool left = dfs(root->left, sum - root->val);
        bool right = dfs(root->right, sum - root->val);
        return left || right;
    }

};


#endif //C___SOLUTION_H
