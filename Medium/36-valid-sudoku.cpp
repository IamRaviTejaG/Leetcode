/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/valid-sudoku/
*/

#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

static auto _ = []() {
    EXECUTE_FASTER;
    return NULL;
}();


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i=0; i<board.size(); i++)
        {
            map<char, bool> rowMap, colMap, sqMap;
            for (int j=0; j<board.size(); j++)
            {
                if (board[i][j] != '.' && rowMap[board[i][j]])
                    return false;
                else
                    rowMap[board[i][j]] = true;
                
                if (board[j][i] != '.' && colMap[board[j][i]])
                    return false;
                else
                    colMap[board[j][i]] = true;
                
                int ri = 3*(i/3);
                int ci = 3*(i%3);

                if (board[ri + j/3][ci + j%3] != '.' && sqMap[board[ri + j/3][ci + j%3]])
                    return false;
                else
                    sqMap[board[ri + j/3][ci + j%3]] = true;
            }
        }
        return true;
    }
};
