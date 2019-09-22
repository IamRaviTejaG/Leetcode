# Author: Ravi Teja Gannavarapu
#
# Difficulty: Medium
#
# https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/

class Solution:
    def reverseParentheses(self, s: str) -> str:
        li = []
        for i in s:
            if i != ')':
                li.append(i)
            else:
                part = []
                while li[-1] != '(':
                    part.append(li.pop())
                li.pop()
                for i in part:
                    li.append(i)
        return ''.join(li)