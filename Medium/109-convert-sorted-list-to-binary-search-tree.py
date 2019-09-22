# Author: Ravi Teja Gannavarapu
#
# Difficulty: Medium
#
# https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

# APPROACH #1:
# Find the middle element using two pointers, where one pointer
# travels two nodes at a time and further use divide & conquer
# to solve the problem.
class Solution:
    def findMid(self, head):
        prev = None
        slow = head
        fast = head
        while fast and fast.next:
            prev = slow
            slow = slow.next
            fast = fast.next.next        
        if prev:
            prev.next = None
        return slow

    def sortedListToBST(self, head: ListNode) -> TreeNode:
        if not head:
            return None
        mid = self.findMid(head)
        root = TreeNode(mid.val)
        if head == mid:
            return root
        root.left = self.sortedListToBST(head)
        root.right = self.sortedListToBST(mid.next)
        return root


# APPROACH #2:
# Convert the Linked List into a list, find the middle element
# of the list and further use it as the root. The left half of
# the list becomes the left subtree and the right half, the
# right subtree.
class Solution:
    def returnList(self, head: ListNode) -> List[int]:
        temp = head
        li = []
        while temp:
            li.append(temp.val)
            temp = temp.next
        return li
        
    def sortedListToBST(self, head: ListNode) -> TreeNode:
        li = self.returnList(head)
        def listToBST(left: int, right: int) -> TreeNode:
            if left > right:
                return None
            mid = (left + right)//2
            root = TreeNode(li[mid])
            if left == right:
                return root
            root.left = listToBST(left, mid-1)
            root.right = listToBST(mid+1, right)
            return root
            
        return listToBST(0, len(li)-1)