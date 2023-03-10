//
// Created by windows on 2023/3/2.
//

#ifndef C___SOLUTION_H
#define C___SOLUTION_H

#include "../Tool/ListNode.h"
#include <unordered_set>

using namespace std;


class Solution{
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> s;
        while (head != NULL){
            if (s.count(head)){
                return true;
            }
            s.insert(head);
            head = head->next;
        }
        return false;
    }
};


#endif //C___SOLUTION_H
