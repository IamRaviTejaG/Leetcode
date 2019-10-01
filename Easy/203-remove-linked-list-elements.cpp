/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/remove-linked-list-elements/
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
    ListNode* removeElements(ListNode* head, int val) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        ListNode *node = new ListNode(0);
        node->next = head;
        ListNode *prev = node, *temp = head, *del = NULL;
        while (temp)
        {
            if (temp->val == val)
            {
                prev->next = temp->next;
                del = temp;
            }
            else
                prev = temp;
            temp = temp->next;   
        }
        return node->next;
    }
};
