//
// Created by windows on 2023/3/2.
//

#ifndef C___SOLUTION_H
#define C___SOLUTION_H


#include "../Tool/TreeNode.h"
#include <vector>
using namespace std;

class Solution{
public:
    /**
     *
     * @param num int整型vector
     * @return TreeNode类
     */
    TreeNode* sortedArrayToBST(vector<int>& num) {
        return dfs(num, 0, num.size() - 1);
    }

    TreeNode* dfs(vector<int>& num, int left, int right) {
        if (left > right) {
            return nullptr;
        }
        int mid = (left + right + 1) / 2;
        TreeNode* root = new TreeNode(num[mid]);
        root->left = dfs(num, left, mid - 1);
        root->right = dfs(num,  mid + 1, right);
        return root;
    }

};


#endif //C___SOLUTION_H
