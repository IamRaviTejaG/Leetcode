/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/remove-duplicates-from-sorted-array/

Runtime: Beats 9.53% of C++
Memory: Beats 100% of C++
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())
            return 0;
        int i = 0;
        while (i<nums.size()-1)
        {
            if (nums[i] == nums[i+1])
                nums.erase(nums.begin()+i);
            else
                i++;
        }
        return nums.size();
    }
};
