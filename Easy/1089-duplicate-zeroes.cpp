/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/duplicate-zeros/
*/


class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        for (int i=0; i<arr.size(); i++)
            if (arr[i] == 0)
            {
                arr.pop_back();
                arr.insert(arr.begin()+i, 0);
                ++i;
            }
    }
};
