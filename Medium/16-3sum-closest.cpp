/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/3sum-closest/
*/

#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

static auto _ = []() {
    EXECUTE_FASTER;
    return NULL;
}();

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if (nums.size() < 3)
            return 0;
        
        sort(nums.begin(), nums.end());
        int diff = target - (nums[0] + nums[1] + nums[2]);
        for (int i=0; i<nums.size(); ++i)
        {
            if (i > 0 && nums[i] == nums[i-1])
                continue;
            if (target <= 0 && nums[i] > 0)
                break;
            
            int j = nums.size()-1;
            int k = i+1;

            while (k < j)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < target)
                    ++k;
                else if (sum > target)
                    --j;
                else
                    return target;
                
                int newDiff = target-sum;
                if (abs(newDiff) < abs(diff))
                    diff = newDiff;
            }
        }
        return target - diff;
    }
};
