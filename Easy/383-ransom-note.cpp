/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/ransom-note/

Runtime: 24ms, beats 68.65% of cpp
Memory: 10.9 MB, beats 100% of cpp
*/


// Uncomment out the code below to increase runtime to 4ms -> beats	99.96% of cpp
/*
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

static auto _ = []() {
    EXECUTE_FASTER;
    return NULL;
}();
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a[26] = {0};
        for (int i=0; magazine[i]; i++)
            a[magazine[i]-'a']++;
        for (int i=0; ransomNote[i]; i++)
            a[ransomNote[i]-'a']--;
        for (int i=0; i<26; i++)
            if (a[i] < 0)
                return false;
        return true;
    }
};
