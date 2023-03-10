//
// Created by windows on 2023/3/2.
//

#ifndef C___SOLUTION_H
#define C___SOLUTION_H


#include "../Tool/TreeNode.h"

class Solution{
public:
    bool isSymmetrical(TreeNode* pRoot) {
        if (pRoot == nullptr){
            return true;
        }
        return dfs(pRoot->left, pRoot->right);
    }

    bool dfs(TreeNode* pLeft, TreeNode* pRight){
        if (pLeft == nullptr || pRight == nullptr){
            if (pLeft != nullptr || pRight != nullptr){
                return false;
            }
            return true;
        }
        if (pLeft->val != pRight->val){
            return false;
        }
        return dfs(pLeft->left, pRight->right) && dfs(pLeft->right, pRight->left);
    }

};


#endif //C___SOLUTION_H
