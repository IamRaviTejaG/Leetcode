/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/height-checker
*/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> c = heights;
        int count = 0;
        // for (int i=0; i<heights.size(); i++)
        //     v[i] = heights[i];
        sort(heights.begin(), heights.end());
        for (int i=0; i<heights.size(); i++)
            if (heights[i] != c[i])
                count++;
        return count;
    }
};
