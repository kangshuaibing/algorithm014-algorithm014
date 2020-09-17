/*
 * @lc app=leetcode.cn id=48 lang=cpp
 *
 * [48] 旋转图像
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int pos1 = 0, pos2 = matrix.size() - 1;
        int add,temp;
        while(pos1 < pos2)
        {
            add = 0;
            while(add < pos2 - pos1)
            {
                temp = matrix[pos2-add][pos1]; 
                matrix[pos2-add][pos1] = matrix[pos2][pos2-add];
                matrix[pos2][pos2-add] = matrix[pos1+add][pos2];
                matrix[pos1+add][pos2] = matrix[pos1][pos2+add];
                matrix[pos1][pos2+add] = temp;
                add++;
            }
            pos1++;
            pos2--;
        }
        
    }
};
// @lc code=end

