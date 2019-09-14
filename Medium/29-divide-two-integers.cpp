/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/divide-two-integers/
*/

#define ll long long int
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

class Solution {
public:
    int divide(int dividend, int divisor) {
		EXECUTE_FASTER;
    	ll sign = (dividend < 0 ^ divisor < 0) ? -1 : 1;
        ll a = labs(dividend);
        ll b = labs(divisor);
        if (b == 0 || dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        else if (b == 1)
            return sign * a;
        
        ll ans = 0;

        while (a >= b)
        {
            int i = 0;
            while(a >= b<<i)
            {
                a -= b<<i;
                ans += 1<<i;
                ++i;
            }
        }
        
        return sign*ans;
    }
};
