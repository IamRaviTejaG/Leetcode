/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/pascals-triangle/

Runtime: Beats 100% of C++
Memory: Beats 74% of C++
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
        vector<int> v1(1, 1);
        if (numRows == 0)
            return a;
        a.push_back(v1);
        for (int i=2; i<numRows+1; i++)
        {
            vector<int> v(i);
            v[0] = v[i-1] = 1;
            for (int j=0; j<a[i-2].size()-1; j++)
                v[j+1] = a[i-2][j] + a[i-2][j+1];
            a.push_back(v);
        }
        return a;
    }
};
