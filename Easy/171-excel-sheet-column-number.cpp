/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/excel-sheet-column-number/
*/


class Solution {
public:
    int titleToNumber(string s) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        int ans = 0;
        for (int i=0; s[i]; i++)
            ans += (((s[i]-'A')+1)*pow(26, s.length()-i-1));
        return ans;
    }
};
