# Author: Ravi Teja Gannavarapu
#
# Difficulty: Easy
#
# https://leetcode.com/problems/compare-strings-by-frequency-of-the-smallest-character/

class Solution:
    def invalidTransactions(self, transactions: List[str]) -> List[str]:
        n = len(transactions)
        valid = [False] * n
        name = [''] * n
        time = [0] * n
        amt = [0] * n
        city = [''] * n
        
        invalid_tx = []
        
        for i, tx in enumerate(transactions):
            a, b, c, d = tx.split(',')
            amt[i] = int(c)
            name[i] = a
            time[i] = int(b)
            city[i] = d
            
        for i in range(n):
            if (amt[i] > 1000):
                valid[i] = True
            for j in range(n):
                if (abs(time[i] - time[j]) <= 60):
                    if (name[i] == name[j]):
                        if (city[i] != city[j]):
                            valid[i] = True
        for i in range(n):
            if (valid[i]):
                invalid_tx.append(transactions[i])
        
        return invalid_tx