/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/find-common-characters/
*/


class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
        // Initialize the dp array with INT_MAX
        int dp[26];
        for (int i=0; i<26; i++)
            dp[i] = INT_MAX;
        
        for (string s: A)
        {
            int a[26] = {0};
            for (char i: s)
                ++a[i-'a'];
            for (int i=0; i<26; i++)
                dp[i] = min(dp[i], a[i]);
        }
        
        vector<string> a;
        for (int i=0; i<26; i++)
            while (dp[i])
            {
                a.push_back(string(1, i+'a'));
                --dp[i];
            }
        return a;
    }
};
