/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/3sum/
*/

#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

static auto _ = []() {
    EXECUTE_FASTER;
    return NULL;
}();

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if (nums.size() < 3)
            return {};
        vector<vector<int>> a;
        sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size()-2; i++)
        {
            if (i > 0 && nums[i] == nums[i-1])
                continue;

            int j = nums.size()-1;
            int k = i+1;

            while (k < j)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)
                {
                    a.push_back({nums[i], nums[k], nums[j]});
                    while (k < j && nums[j] == nums[j-1])
                        --j;
                    while (k < j && nums[k] == nums[k+1])
                        ++k;
                    ++k;
                    --j;
                }
                else if (sum < 0)
                    ++k;
                else
                    --j;
            }
        }
        return a;
    }
};
