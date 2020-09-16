/*
 * @lc app=leetcode.cn id=79 lang=cpp
 *
 * [79] 单词搜索
 */

// @lc code=start
class Solution {
public:
    bool backtracking(vector<vector<char>>& board, string word, string curr, int indexX, int indexY, int currIndex )
    {
        if(curr == word) return true;
        if(currIndex > word.size) return false;
        for(int i = indexX; i < board.size(); i++)
        {
            for(int j = indexY; i < board[0].size(); j++)
            {
                if(word[currIndex] == board[indexX][indexY])
                {
                   
                    curr += board[indexX][indexY];
                    if(indexX + 1 < board.size()) backtracking(board, word, curr, indexX + 1, indexY , currIndex + 1);
                    if(indexX + 1 < board.size() && indexY + 1 < board[0].size()) backtracking(board, word, curr, indexX + 1, indexY + 1, currIndex + 1);
                    if(indexX - 1 > 0  && indexY  > 0) backtracking(board, word, curr, indexX - 1, indexY , currIndex + 1);
                    if(indexX - 1 > 0  && indexY - 1 > 0) backtracking(board, word, curr, indexX - 1, indexY - 1, currIndex + 1);
                }
            }
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
         //回溯
        string path;
        return backtracking(board, word, path, 0, 0, 0);
        
    }
};
// @lc code=end

