/*
 * @lc app=leetcode.cn id=37 lang=cpp
 *
 * [37] 解数独
 */

// @lc code=start
class Solution {
public:
    bool isValid(vector<vector<char>>& board, int row, int column, char ch)
    {
        for(int i = 0, i < 9; i++)
        {
            if(board[row][i] == ch) return false;
            if(board[i][cloumn] == ch) return false;
            if(board[(row/3)*3 + i/3][(row/3)*3 + i%3 == ch) return false;
        }
        return true;
    }
    bool backtrack(vector<vector<char>>& board, int row, int column)
    {
        int m = 9, n = 9;
        if(column == n)
            return backtrack(board, row + 1, 0);
        if(row == m) 
            return ture;

        for(int i = row, i < m; i++)
        {
            for(int j = cloumn, i < n; j++)
            {
                if(board[i][j] != '.')
                    return backtrack(board, row, column + 1);
                for(char ch = '1', ch <=9; ch++)
                {
                    if(!isValid(board))
                        continue;
                    board[i][j] = ch;
                    if(backtrack(board, row, column + 1))
                        return true;
                    board[i][j] = '.';
                }
                return false;
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        backtrack(board, 0, 0);
    }
};
// @lc code=end

