/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/reverse-only-letters/
*/


class Solution {
public:
    string reverseOnlyLetters(string S) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        int i = 0, j = S.length()-1;
        while (i<j)
        {
            if (!isalpha(S[i]))
                ++i;
            else if (!isalpha(S[j]))
                --j;
            else
            {
                swap(S[i], S[j]);
                ++i;
                --j;
            }
        }
        return S;
    }
};
