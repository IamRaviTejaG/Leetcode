/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/prime-arrangements/
*/

const int MAXMOD = 1e9+7;

bool isPrime(int n)
{
    if (n < 2)
        return true;
    int i = 2;
    while (i*i <= n)
    {
        if (n%i == 0)
            return false;
        i++;
    }
    return true;
}

class Solution {
public:
    int numPrimeArrangements(int n) {
        int primeCount = 0;
        for (int i=2; i<=n; i++)
            if (isPrime(i))
                primeCount++;
        int b = n-primeCount;
        long long int ans = 1;
        for (int i=1; i<=b; i++)
            ans = (ans*i) % MAXMOD;
        for (int i=1; i<=primeCount; i++)
            ans = (ans*i) % MAXMOD;
        return ans;
    }
};
