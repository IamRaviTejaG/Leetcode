# Author: Ravi Teja Gannavarapu
#
# Difficulty: Medium
#
# https://leetcode.com/contest/biweekly-contest-8/problems/before-and-after-puzzle/

# Given a list of phrases, generate a list of Before and After puzzles.
#
# A phrase is a string that consists of lowercase English letters and spaces only.
# No space appears in the start or the end of a phrase. There are no consecutive spaces
# in a phrase.
#
# Before and After puzzles are phrases that are formed by merging two phrases where the
# last word of the first phrase is the same as the first word of the second phrase.
#
# Return the Before and After puzzles that can be formed by every two phrases phrases[i]
# and phrases[j] where i != j. Note that the order of matching two phrases matters, we
# want to consider both orders.
#
# You should return a list of distinct strings sorted lexicographically.

# Example 1:
# Input: phrases = ["writing code","code rocks"]
# Output: ["writing code rocks"]
#
# Example 2:
# Input: phrases = ["mission statement",
#                   "a quick bite to eat",
#                   "a chip off the old block",
#                   "chocolate bar",
#                   "mission impossible",
#                   "a man on a mission",
#                   "block party",
#                   "eat my words",
#                   "bar of soap"]
# Output: ["a chip off the old block party",
#          "a man on a mission impossible",
#          "a man on a mission statement",
#          "a quick bite to eat my words",
#          "chocolate bar of soap"]
#
# Example 3:
# Input: phrases = ["a","b","a"]
# Output: ["a"]


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