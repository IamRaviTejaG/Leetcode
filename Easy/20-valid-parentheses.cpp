/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/valid-parentheses/
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        if (s.length() == 0)
            return true;
        if (s.length() == 1)
            return false;

        for (int i=0; s[i]; i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                a.push(s[i]);
            else
            {
                if (s[i] == ')')
                {
                    if (!a.empty() && a.top() == '(')
                        a.pop();
                    else
                        return false;
                }   
                if (s[i] == ']')
                {
                    if (!a.empty() && a.top() == '[')
                        a.pop();
                    else
                        return false;
                }
                if (s[i] == '}')
                {
                    if (!a.empty() && a.top() == '{')
                        a.pop();
                    else
                        return false;
                }
            }
        }
        if (!a.empty())
            return false;
        return true;
    }
};
