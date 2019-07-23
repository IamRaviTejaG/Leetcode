/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/01-matrix/
*/

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int r = matrix.size();
        if (r == 0)
            return matrix;
        int c = matrix[0].size();
        vector<vector<int>> dist(r, vector<int>(c, INT_MAX - 100000));
        for (int i=0; i<r; i++)
            for(int j=0; j<c; j++)
            {
                if (matrix[i][j] == 0)
                    dist[i][j] = 0;
                else
                {
                    if (i > 0)
                        dist[i][j] = min(dist[i][j], dist[i-1][j] + 1);
                    if (j > 0)
                        dist[i][j] = min(dist[i][j], dist[i][j-1] + 1);
                }
            }
        for (int i=r-1; i>-1; i--)
            for (int j=c-1; j>-1; j--)
            {
                if (i < r-1)
                    dist[i][j] = min(dist[i][j], dist[i+1][j] + 1);
                if (j < c-1)
                    dist[i][j] = min(dist[i][j], dist[i][j+1] + 1);
            }
        return dist;
    }
};
