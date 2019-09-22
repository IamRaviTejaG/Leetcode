# Author: Ravi Teja Gannavarapu
#
# Difficulty: Medium
#
# https://leetcode.com/problems/binary-tree-inorder-traversal/


# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def util(self, root: TreeNode, a: List[int]) -> None:
        if root:
            self.util(root.left, a)
            a.append(root.val)
            self.util(root.right, a)
    
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        a = []
        self.util(root, a)
        return a