//
// Created by windows on 2023/3/10.
//

#ifndef C___LISTNODE_H
#define C___LISTNODE_H

#include <cstddef>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


#endif //C___LISTNODE_H
