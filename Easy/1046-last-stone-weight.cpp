/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/last-stone-weight/
*/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() != 1)
        {
            sort(stones.begin(), stones.end(), greater<int>());
            if (stones[0] == stones[1])
            {
                stones.erase(stones.begin(), stones.begin()+2);
                // stones.erase(stones.begin());
                stones.push_back(0);
            }
            else
            {
                int temp = stones[1];
                stones.erase(stones.begin()+1);
                stones[0] = (stones[0] - temp);
            }
        }
        return stones[0];
    }
};
