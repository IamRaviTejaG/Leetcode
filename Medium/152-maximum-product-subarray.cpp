/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/maximum-product-subarray/
*/


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        int minp = nums[0], maxp = nums[0], ans = nums[0];
        for (int i=1; i<nums.size(); i++)
        {
            int mn = minp, mx = maxp;
            minp = min(nums[i], min(mx*nums[i], mn*nums[i]));
            maxp = max(nums[i], max(mx*nums[i], mn*nums[i]));
            ans = max(ans, maxp);
        }
        return ans;
    }
};
