/*
Author: Ravi Teja Gannavarapu

Difficulty: Hard

https://leetcode.com/problems/valid-number/

Runtime: 4 ms (75 %)
Memory: 8.1 MB (80 %)
*/


inline string trim(string &str)
{
    str.erase(0, str.find_first_not_of(' ')); // prefixing spaces
    str.erase(str.find_last_not_of(' ')+1); // suffixing spaces
    return str;
}


class Solution {
public:
    bool isNumber(string s) {
    	
        s = trim(s); // Trim string of trailing whitespaces.
        int flag = 0; // Checks flag
        int digflag = 0; // Digit check flag
        int dotflag = 0; // Dot check flag
        int eflag = 0; // 'e' char flag
        
		for (int i=0; s[i]; i++)
        {
        	// Checks if atleast one digit is present in the string.
            if (s[i]-'0' >=0 && s[i]-'0' <= 9)
                digflag = 1;
            
            // Checks if there's any alphabets are present except 'e'.
            if (isalpha(s[i]) && s[i] != 'e')
            {
                flag = 1;
                break;
            }
            
            // A space should shouldn't occur midway in the string.
            if (s[i] == ' ')
                if (i>0 && i<s.length()-1)
                    return false;
            
            // A '+' or '-' shouldn't occur at the end.
            if (s[i] == '+' || s[i] == '-')
            {
            	// A '+' or '-' shouldn't occur at the end.
                if (i == s.length()-1)
                    return false;
                
                // A '+' or '-' must have an 'e' before it.
                if (i > 0 && i<s.length()-1)
                {
                    if (s[i-1] != 'e')
                    {
                        flag = 1;
                        break;
                    }
                    else
                        continue;
                }
            }
            
            if (s[i] == 'e')
            {
                // If there already has been an 'e' before, the string is invalid.
				if (eflag)
                    return false;
                
                // 'e' shouldn't occur at the beginning or at the end of the string.
                if (i==0 || i==s.length()-1)
                    return false;
                
                // A dot can occur only before an 'e' occurs.
                if (dotflag)
                {
                    eflag = 1;
                    continue;
                }
            
            	// If the char before an 'e' isn't a digit.
                if (s[i-1]-'0' < 0 || s[i-1]-'0' > 9)
                {
                    flag = 1;
                    break;
                }
                
                // 'e' can have a '+' or '-' following it.
                if (s[i+1] == '+' || s[i+1] == '-')
                {
                    eflag = 1;
                    continue;
                }
                
                // If '+' or '-' do not follow an 'e', it must be a number that follows it.
                if (s[i+1]-'0' < 0 || s[i+1]-'0' > 9)
                {
                    flag = 1;
                    break;
                }
                
                // To check if an 'e' has occurred before in the string.
                eflag = 1;
            }
            
            if (s[i] == '.')
            {
            	// If a dot or 'e' has occurred before, abort.
                if (dotflag || eflag)
                {
                    flag = 1;
                    break;
                }
                
                // Dot at the beginning must be followed by a digit.
                if (i == 0)
                {
                    if (s[i+1]-'0' < 0 || s[i+1]-'0' > 9)
                    {
                        flag == 1;
                        break;
                    }
                }
                
                // Dot at the end must be preceded by a digit.
                else if (i==s.length()-1)
                {
                    if (s[i-1]-'0' < 0 || s[i-1]-'0' > 9)
                    {
                        flag == 1;
                        break;
                    }
                }
                
                // Dot is present in between 0 & last element.
                else
                {
                	// A '+' or '-' must occur immediately before the dot.
                	// "+.1" -> valid
                	// "-.1" -> valid
                	// ".+1" -> invalid
                	// ".-1" -> invalid
                    if (s[i-1] == '+' || s[i-1] == '-')
                        continue;
                        
                    // A dot can be preceded by a digit.                    
                    if (s[i-1]-'0' < 0 || s[i-1]-'0' > 9)
                    {
                        flag = 1;
                        break;
                    }
                    
                    // A dot can be succeeded by an 'e'.
                    if (s[i+1] == 'e')
                    {
                        dotflag = 1;
                        continue;
                    }
                    
                    // A dot can be succeeded by a digit.
                    if (s[i+1]-'0' < 0 || s[i+1]-'0' > 9)
                    {
                        flag = 1;
                        break;
                    }
                }
                
                // To check if a dot has occurred before in the string.
                dotflag = 1;
            }
        }
        
        // If the string contains 0 digits, return false.
        if (!digflag)
            return false;
        // If any of the checks above failed, return false.
        if (flag)
            return false;
            
        // In all other cases, return true.
        return true;
    }
};
