/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/day-of-the-week/
https://leetcode.com/contest/weekly-contest-153/problems/day-of-the-week/
*/

class Solution {
public:
    string dayName[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    string dayOfTheWeek(int d, int m, int y) {
        int weekday = (d += m < 3 ? y-- : y - 2, 23*m/9 + d + 4 + y/4- y/100 + y/400)%7;
        return dayName[weekday];
    }
};
