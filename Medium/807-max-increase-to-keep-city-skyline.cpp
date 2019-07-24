/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/max-increase-to-keep-city-skyline/
*/


class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int a = grid.size();
        
        vector<int> max_row(a, 0);
        vector<int> max_col(a, 0);
        
        for (int i=0; i<a; i++)
            for (int j=0; j<a; j++)
            {
                max_row[i] = max(max_row[i], grid[i][j]);
                max_col[j] = max(max_col[j], grid[i][j]);
            }
        
        int res = 0;
        for (int i=0; i<a; i++)
            for (int j=0; j<a; j++)
                res += min(max_row[i], max_col[j]) - grid[i][j];
        
        return res;
    }
};
