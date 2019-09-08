# Author: Ravi Teja Gannavarapu
#
# Difficulty: Medium
#
# https://leetcode.com/contest/biweekly-contest-8/problems/before-and-after-puzzle/

class Solution:
    def beforeAndAfterPuzzles(self, phrases: List[str]) -> List[str]:
        for i in range(len(phrases)):
            phrases[i] = phrases[i].split()
        a = set()
        for i in range(len(phrases)):
            for j in range(len(phrases)):
                b = len(phrases[i])
                if (phrases[i][b-1] == phrases[j][0] and i != j):
                    c = phrases[i] + phrases[j]
                    del c[b]
                    c = ' '.join(c)
                    a.add(c)
        return sorted(list(a))