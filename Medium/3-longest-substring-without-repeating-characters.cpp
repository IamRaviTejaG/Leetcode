/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/longest-substring-without-repeating-characters/
*/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> a;
        int i = 0, j = 0, maxc = 0;
        while (i < s.length() && j < s.length())
        {
            if (a.find(s[j]) == a.end())
            {
                a.insert(s[j++]);
                maxc = max(maxc, j-i);
            }
            else
                a.erase(s[i++]);                
        }
        return maxc;
    }
};
