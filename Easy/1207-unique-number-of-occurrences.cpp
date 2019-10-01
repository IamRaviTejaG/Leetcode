/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/unique-number-of-occurrences/
*/


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        vector<int> n(2001);
        for (int i=0; i<arr.size(); i++)
            ++n[arr[i]+1000];
        sort(n.begin(), n.end());
        for (int i=0; i<2000; i++)
            if (n[i] && n[i+1] == n[i])
                return 0;
        return 1;
    }
};
