/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/first-bad-version/
*/


// Forward declaration of isBadVersion API.
bool isBadVersion(int version);


class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        int h = n;
        while (l < h)
        {
            int mid = l + (h-l)/2;
            if (isBadVersion(mid))
                h = mid;
            else
                l = mid+1;
        }
        return l;
    }
};
