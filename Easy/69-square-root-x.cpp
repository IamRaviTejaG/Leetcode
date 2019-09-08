/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/sqrtx/
*/


// Linear Search solution

class Solution {
public:
    int mySqrt(int x) {
        unsigned long long int i=1;
        while (i*i <= x)
            i++;
        return i-1;
    }
};



// Binary Search solution

class Solution {
public:
    int mySqrt(int x) {
        long int low = 0;
        long int high = x;
        while (low <= high)
        {
            long int mid = low + ((high-low)/2);
            if (mid*mid == x)
                return mid;
            else if (mid*mid < x)
                low = mid+1;
            else
                high = mid-1;
        }
        return high;
    }
};
