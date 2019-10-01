/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/maximum-subarray/
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        int sum = nums[0], ans = sum;
        for (int i=1; i<nums.size(); i++)
        {
            sum = max(nums[i], sum+nums[i]);
            ans = max(ans, sum);
        }
        return ans;
    }
};
