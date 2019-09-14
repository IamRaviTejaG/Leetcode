/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/remove-element/
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        int i=0, s=nums.size();
        while (i<s)
        {
            if (nums[i] == val)
            {
                nums[i] = nums[s-1];
                --s;
            }
            else
                ++i;
        }
        return s;
    }
};
