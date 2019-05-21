/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/linked-list-cycle-ii/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int pos = 0;
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, int> u;
        ListNode *temp = head;
        while(temp) {
            if (u.find(temp->next) != u.end())
                return temp->next;
            u[temp] = pos;
            temp = temp->next;
            pos++;
        }
        return NULL;
        
        // Uncomment code below and comment the code above for alternate solution.
        // The below code runs little faster than the above.
        
        // int flag = 0;
        // ListNode *a = head, *b = head;
        // while (a != NULL && b != NULL) {
        //     a = a->next;
        //     if (b->next == NULL)
        //         return NULL;
        //     b = b->next->next;
        //     if (a == b) {
        //         flag = 1;
        //         break;
        //     }
        // }
        // if (!flag)
        //     return NULL;
        // a = head;
        // while (a != b) {
        //     a = a->next;
        //     b = b->next;
        // }
        // return a;
    }
};
