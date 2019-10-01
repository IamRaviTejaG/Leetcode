/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/minimum-absolute-difference/
*/


class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        
        int mdiff = INT_MAX;
        
        for (int i=0; i<arr.size()-1; i++)
            mdiff = min(mdiff, (arr[i+1] - arr[i]));
        
        for (int i=0; i<arr.size()-1; i++)
            if (arr[i+1] - arr[i] == mdiff)
                res.push_back({arr[i], arr[i+1]});
        
        return res;
    }
};
