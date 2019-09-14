/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/move-zeroes/
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        int lastNonZero = 0;
        for (int i=0; i<nums.size(); i++)
            if (nums[i] != 0)
                nums[lastNonZero++] = nums[i];
        for (int i=lastNonZero; i<nums.size(); i++)
            nums[i] = 0;
    }
};
