# Author: Ravi Teja Gannavarapu
#
# Difficulty: Easy
#
# https://leetcode.com/problems/merge-two-sorted-lists/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        if l1 is None:
            return l2
        elif l2 is None:
            return l1
        elif l1.val <= l2.val:
            a = self.mergeTwoLists(l1.next, l2)
            l1.next = a
            return l1
        else:
            a = self.mergeTwoLists(l2.next, l1)
            l2.next = a
            return l2