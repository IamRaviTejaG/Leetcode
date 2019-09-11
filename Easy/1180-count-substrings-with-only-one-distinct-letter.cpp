/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/contest/biweekly-contest-8/problems/count-substrings-with-only-one-distinct-letter/
*/

int countSubstrings(string s)
{
    int result = 0;
    int a[26] = {0};
    for (int i=0; s[i]; i++)
    {
        memset(a, 0, sizeof(a));
        int dc = 0;
        for (int j=i; s[j]; j++)
        {
            if (a[s[j] - 'a'] == 0)
                dc++;
            a[s[j]-'a']++;
            if (dc == 1)
                result++;
            if (dc > 1)
                break;
        }
    }
    return result;
}

class Solution {
public:
    int countLetters(string S) {
        return countSubstrings(S);
    }
};
