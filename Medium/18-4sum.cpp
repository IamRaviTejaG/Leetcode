/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/4sum
*/

#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

static auto _ = []() {
    EXECUTE_FASTER;
    return NULL;
}();

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> a;
        int n = nums.size();
        if (n < 4)
            return a;
        sort(nums.begin(), nums.end());
        for (int i=0; i<n-3; ++i)
        {
            if (target <= 0 && nums[i] > 0)
                break;
            if (nums[i] + nums[i+1] + nums[i+2] + nums[i+3] > target)
                break;
            if (nums[i] + nums[n-3] + nums[n-2] + nums[n-1] < target)
                continue;
            if ((i > 0) && (nums[i] == nums[i-1]))
                continue;
            
            for (int j=i+1; j<n-2; ++j)
            {
                if (nums[i] + nums[j] + nums[j+1] + nums[j+2] > target)
                    break;
                if (nums[i] + nums[j] + nums[n-2] + nums[n-1] < target)
                    continue;
                if ((j > i+1) && (nums[j] == nums[j-1]))
                    continue;
                
                int l = j + 1;
                int r = n- 1;
                while (l < r)
                {
                    int s = nums[i] + nums[j] + nums[l] + nums[r];
                    if (s == target)
                    {
                        a.push_back({nums[i], nums[j], nums[l], nums[r]});
                        int lleft = nums[l], lright = nums[r];
					    while (l < r and nums[l] == lleft)
                            ++l;
					    while (l < r and nums[r] == lright)
                            --r;
                    }
                    else if (s < target)
                        l++;
                    else
                        r--;
                }
            }
        }
        return a;
    }
};
