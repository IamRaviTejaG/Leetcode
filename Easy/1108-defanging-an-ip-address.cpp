/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/defanging-an-ip-address
*/

class Solution {
public:
    string defangIPaddr(string address) {
        int i=0;
        string p = "";
        while (address[i])
        {
            if (address[i] == '.')
                p += "[.]";
            else
                p += address[i];
            i++;
        }
        return p;
    }
};
