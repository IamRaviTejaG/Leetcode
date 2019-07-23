# Author: Ravi Teja Gannavarapu
#
# Difficulty: Easy
#
# https://leetcode.com/problems/most-common-word/

class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        for i in "!?',;.":
            paragraph = paragraph.replace(i, ' ')

        a = dict(collections.Counter(paragraph.lower().split()))
        b = set(a.keys()).difference(set(banned))
        c = -1
        mc_word = f''
        for i in b:
            if (c != max(c, a[i])):
                mc_word = i
                c = max(c, a[i])
        return mc_word
