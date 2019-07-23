/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/flipping-an-image/
*/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (int i=0; i<A.size(); i++)
        {
            int s = A[i].size();
            for (int j=0; j<(s+1)/2; j++)
            {
                int temp = A[i][j] ^ 1;
                A[i][j]  = A[i][s-j-1] ^ 1;
                A[i][s-j-1] = temp;
            }
        }
        return A;
    }
};

// The above solution alters the input vector.
// Alternative solution using a different vector.
// But heavy on memory.

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> v;
        for (int i=0; i<A.size(); i++)
        {
            vector<int> b;
            for (int j=A[i].size()-1; j>=0; j--)
            {
                if (A[i][j] == 1)
                    b.push_back(0);
                else
                    b.push_back(1);
            }
            v.push_back(b);
        }
        return v;
    }
};
