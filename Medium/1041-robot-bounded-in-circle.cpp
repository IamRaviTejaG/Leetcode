/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/robot-bounded-in-circle/
*/

class Solution {
public:
    bool isRobotBounded(string instructions) {
        int count = 0, n = 4, x = 0, y = 0;
        while(n--) {
            for (int i=0; instructions[i]; i++)
            {
                if(instructions[i] == 'L')
                    ++count;
                if(instructions[i] == 'R')
                    --count;
                count = count>3?count-4:count;
                count = count<0?count+4:count;
                if(instructions[i] == 'G') {
                    if (count == 0)
                        y++;
                    if (count == 1)
                        x--;
                    if (count == 2)
                        y--;
                    if (count == 3)
                        x++;
                }
            }
        }
        if (x==0 && y==0)
            return true;
        return false;
    }
};
