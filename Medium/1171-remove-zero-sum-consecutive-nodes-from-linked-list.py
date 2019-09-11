# Author: Ravi Teja Gannavarapu
#
# Difficulty: Medium
#
# https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def removeZeroSumSublists(self, head: ListNode) -> ListNode:
        temp = ListNode(0)
        temp.next = head
        d = {}
        s = 0
        a = temp
        while(a):
            s += a.val
            if s not in d:
                d[s] = a
            else:
                d[s].next = a.next
            a = a.next
        return temp.next