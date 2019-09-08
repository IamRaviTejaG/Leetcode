# Author: Ravi Teja Gannavarapu
#
# Difficulty: Easy
#
# https://leetcode.com/problems/compare-strings-by-frequency-of-the-smallest-character/

def countFreq(s: str) -> int:
        return (s.count(sorted(s)[0]))

class Solution:    
    def numSmallerByFrequency(self, queries: List[str], words: List[str]) -> List[int]:
        answer = []
        for i in range(len(queries)):
            queries[i] = countFreq(queries[i])
        for j in range(len(words)):
            words[j] = countFreq(words[j])
        for k in queries:
            count = sum(i > k for i in words)
            answer.append(count)
        return answer