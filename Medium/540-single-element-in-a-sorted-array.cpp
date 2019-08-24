/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/single-element-in-a-sorted-array/
*/

int bsearch(vector<int> &a)
{
	int low = 0;
	int high = a.size()-1;
	while(low <= high)
	{
		if (low == high)
			return a[low];
		int mid = low + (high-low)/2;
		if (mid & 1)
		{
			if (a[mid] == a[mid-1])
				low = mid+1;
			else
				high = mid;
		}
		else
		{
			if (a[mid] == a[mid+1])
				low = mid+2;
			else
				high = mid;
		}
	}
	return -1;
}


// This solution runs in O(log n) time.
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
	    return bsearch(nums);
    }
};

//This soltuion runs in O(n) time.
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int res = nums[0];
        for (int i=0; i<nums.size(); i++)
            res ^= nums[i];
        return res;
    }
};
