/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/add-two-numbers/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *newLL = new ListNode(0), *temp = newLL;
        int carry = 0, a = 0;
        while (l1 || l2)
        {
            if (l1 && l2)
                a = l1->val + l2->val + carry;
            else if (l1 && !l2)
                a = l1->val + carry;
            else
                a = l2->val + carry;
            int b = a % 10;
            carry = a / 10;
            temp->next = new ListNode(b);
            temp = temp->next;
            if(l1)
                l1 = l1->next;
            else
                l1 = NULL;
            if (l2)
                l2 = l2->next;
            else
                l2 = NULL;
        }
        if (carry > 0) {
            temp->next = new ListNode(carry);
        }
        return newLL->next;
    }
};
