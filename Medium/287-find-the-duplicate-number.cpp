/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/find-the-duplicate-number/
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        set<int> s;
        for (int i=0; i<nums.size(); i++)
        {
            s.insert(nums[i]);
            if (s.size() != i+1)
                return nums[i];
        }
        return -1;
    }
};
