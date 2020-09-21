/*
 * @lc app=leetcode.cn id=240 lang=cpp
 *
 * [240] 搜索二维矩阵 II
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0 || matrix[0].size() == 0) return false;

        int row = 0;
        int col = matrix[0].size() - 1;
        
        while(col >= 0 && row < matrix.size())
        {
            if(target < matrix[row][col])
                col--;
            else if(target > matrix[row][col])
                row++;
            else 
                return true;
        }
        return false;
        
    }
};
// @lc code=end

