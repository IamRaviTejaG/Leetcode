# Author: Ravi Teja Gannavarapu
#
# Difficulty: Easy
#
# https://leetcode.com/problems/number-of-1-bits/


class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        cnt = 0
        while n:
            if (n & 1):
                cnt += 1
            n >>= 1
        return cnt