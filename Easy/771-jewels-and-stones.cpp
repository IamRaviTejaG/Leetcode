/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/jewels-and-stones/
*/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        for (int i=0; S[i]; i++)
            for (int j=0; J[j]; j++)
                if (S[i] == J[j])
                    count++;
        return count;
    }
};
