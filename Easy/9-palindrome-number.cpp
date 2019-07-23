/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/palindrome-number/
*/

class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> a;
        if (x < 0)
            return false;
        while (x>0)
        {
            a.push_back(x%10);
            x /= 10;
        }
        for (int i=0; i<a.size()/2; i++)
            if (a[i] != a[a.size()-i-1])
                return false;
        return true;
    }
};
