/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/triangle/
*/


class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        int a = triangle.size();
        vector<int> dp(triangle[a-1]);
        for (int i=a-2; i>=0; i--)
            for (int j=0; j<=i; j++)
                dp[j] = triangle[i][j] + min(dp[j], dp[j+1]);
        return dp[0];
    }
};
