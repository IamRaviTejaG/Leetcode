/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
*/


#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

static auto _ = []() {
    EXECUTE_FASTER;
    return NULL;
}();

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        bool present = binary_search(nums.begin(), nums.end(), target);
        if (!present)
            return {-1, -1};
        auto a = lower_bound(nums.begin(), nums.end(), target);
        auto b = upper_bound(nums.begin(), nums.end(), target);
        auto c = a - nums.begin();
        auto d = b - nums.begin()-1;
        return {c, d};
    }
};
