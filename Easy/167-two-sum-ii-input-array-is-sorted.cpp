/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        int i=0, j=nums.size()-1;
        vector<int> a(2);
        while (i<j)
        {
            int sum = nums[i] + nums[j];
            if (sum == target)
            {
                a[0] = i+1, a[1] = j+1;
                break;
            }
            else if (sum < target)
                ++i;
            else
                --j;           
        }
        return a;
    }
};
