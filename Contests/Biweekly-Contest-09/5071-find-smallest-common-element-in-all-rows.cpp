// Difficulty: Medium
//
// https://leetcode.com/problems/find-smallest-common-element-in-all-rows/
//
// 5071. Find Smallest Common Element in All Rows
//
// Given a matrix mat where every row is sorted in increasing order, return the smallest common element in all rows.
//
// If there is no common element, return -1.
// 
// Example 1:
//
// Input: mat = [[1,2,3,4,5],[2,4,5,8,10],[3,5,7,9,11],[1,3,5,7,9]]
// Output: 5


class Solution {
public:
    int smallestCommonElement(vector<vector<int>>& mat) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        map<int, int> m;
        for (int i=0; i<mat.size(); i++)
            for (int j=0; j<mat[i].size(); j++)
                ++m[mat[i][j]];
        int res = -1;
        for (auto it=m.begin(); it!= m.end(); it++)
            if ((*it).second == mat.size())
            {
                res = (*it).first;
                break;
            }
        return res;
    }
};
