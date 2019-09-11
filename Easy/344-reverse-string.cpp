/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/reverse-string/

Runtime: 48ms, beats 74.20% of cpp
Memory: 15.2 MB, beats 95.12% of cpp
*/

// Uncomment out the code below to increase runtime to 40ms -> beats 98.02% of cpp
/*
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

static auto _ = []() {
    EXECUTE_FASTER;
    return NULL;
}();
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int a = s.size()/2;
        for (int i=0; i<a; i++)
            swap(s[i], s[s.size()-i-1]);
    }
};
