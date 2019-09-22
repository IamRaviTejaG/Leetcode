# Author: Ravi Teja Gannavarapu
#
# Difficulty: Easy
#
# https://leetcode.com/problems/maximum-number-of-balloons/

class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        a, b, n = text.count('a'), text.count('b'), text.count('n')
        l, o = text.count('l')/2, text.count('o')/2
        return min(a, b, int(l), n, int(o))