/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/
*/


class Solution {
public:
    void reverseInRange(string &s, int start, int end)
    {
        while (start <= end)
        {
            swap(s[start], s[end]);
            ++start;
            --end;
        }
    }
    
    string reverseParentheses(string s) {
        string res;
        if (s.empty())
            return "";

        stack<char> st;
        for (int i=0; s[i]; i++)
        {
            if (s[i] == '(')
                st.push(i);
            else if (s[i] == ')')
            {
                auto a = st.top();
                st.pop();
                reverse(s, a+1, i-1);
            }
        }
        
    }
};
