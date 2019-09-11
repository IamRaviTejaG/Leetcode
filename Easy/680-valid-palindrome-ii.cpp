/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/valid-palindrome-ii/
*/

#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

static auto _ = []() {
    EXECUTE_FASTER;
    return NULL;
}();

class Solution {
public:
    bool utilFunc(string s, int l, int r, bool deleted)
    {
        while (l<r)
        {
            if (s[l] != s[r])
            {
                if (deleted)
                    return false;
                return utilFunc(s, l+1, r, true) || utilFunc(s, l, r-1, true);
            }
            ++l;
            --r;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        return utilFunc(s, 0, s.size()-1, false);
    }
};
