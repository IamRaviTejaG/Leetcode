/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/middle-of-the-linked-list/
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
    // vector<ListNode*> v;
    ListNode* middleNode(ListNode* head) {
        ListNode *first = head, *last = head;
        while(last && last->next) {
            first = first->next, last = last->next->next;
        }
        return first;
    }
	// vector<ListNode*> v;
	// ListNode* middleNode(ListNode* head) {
	//     while(head) {
	//         v.push_back(head);
	//         head = head->next;
	//     }
	//     return v[v.size()/2];
	// }
};
