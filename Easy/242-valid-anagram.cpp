/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/valid-anagram/

Runtime: 0ms, beats 100% of cpp
Memory: 9.2 MB, beats 98.51% of cpp
*/


#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

static auto _ = []() {
    EXECUTE_FASTER;
    return NULL;
}();

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;
        int flag = 0;
        int a[26] = {0};
        for (int i=0; s[i]; i++)
            ++a[s[i]-'a'], --a[t[i]-'a'];
        for (int i=0; i<26; i++)
            if (a[i] != 0)
                flag = 1;
        if (flag)
            return false;
        return true;
    }
};