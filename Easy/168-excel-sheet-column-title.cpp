/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/excel-sheet-column-title/
*/


class Solution {
public:
    string convertToTitle(int n) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        string s = "";
        while (n>0)
        {
            int a = n%26;
            if (a == 0)
            {
                s += 'Z';
                n = (n/26) - 1;
            }
            else
            {
                s += (char)(64+a);
                n /= 26;
            }
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
