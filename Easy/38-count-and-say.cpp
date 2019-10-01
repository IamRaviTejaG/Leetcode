/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/count-and-say/
*/


class Solution {
public:
    string countAndSay(int n) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        string s = "1";
        int c = 1;
        while (c < n)
        {
            string temp = "";
            int j = 0;
            while(s[j])
            {
                int cnt = 1;
                while(s[j] == s[cnt+j])
                    ++cnt;
                temp += to_string(cnt) + s[j];
                j += cnt;
            }
            s = temp;
            ++c;
        }
        return s;
    }
};
