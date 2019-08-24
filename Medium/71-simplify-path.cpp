/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/simplify-path/
*/


class Solution {
public:
    string simplifyPath(string path) {
        replace(path.begin(), path.end(), '/', ' ');
        vector<string> s;
        stringstream ss(path);
        string a;
        while (ss >> a)
        {
            if (a == ".")
                continue;
            if (a == "..")
            {
                if (s.size() > 0)
                    s.pop_back();
                continue;
            }
            s.push_back(a);
        }
        
        string res = "";
        for (int i=0; i<s.size(); i++)
            res += "/" + s[i];
        if (res == "")
            return "/";
        return res;
    }
};
