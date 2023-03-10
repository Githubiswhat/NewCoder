//
// Created by windows on 2023/3/10.
//

#ifndef C___TREENODE_H
#define C___TREENODE_H


#include <cstddef>

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

#endif //C___TREENODE_H
