/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/two-sum/
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<pair<int, int>> a;
        
        for (int i=0; i<nums.size(); i++)
        {
            pair<int, int> temp(nums[i], i);
            a.push_back(temp);
        }
        
        sort(a.begin(), a.end());
        
        int i = 0;
        int j = a.size()-1;
        
        while(i<j)
        {
            if (a[i].first + a[j].first == target)
            {
                vector<int> v{a[i].second, a[j].second};
                return v;
            }
            else if (a[i].first + a[j].first > target)
                --j;
            else
                ++i;
        }
    return {0}; 
    }
};
