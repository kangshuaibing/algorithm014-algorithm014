/*
 * @lc app=leetcode.cn id=74 lang=cpp
 *
 * [74] 搜索二维矩阵
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //二分查找-一维数组
        /*
        int m = matrix.size();
        if(m == 0) return false;
        int n = matrix[0].size();

        int l = 0, r = m * n - 1;
        while(l <= r)
        {
            int midIndex = l + (r - l) / 2;
            int mid = matrix[midIndex / n][midIndex % n];
            if(mid == target)
                return true;
            else if(mid < target)
                l = midIndex + 1;
            else
                r = midIndex - 1; 
        }
        return false;
        */
        //二分查找-右上角
        int m = matrix.size();
        if(m == 0) return false;
        int n = matrix[0].size();

        int l = 0, r = n - 1;
        while(l < m && r >= 0)
        {
            if(matrix[l][r] == target) return true;
            else if(matrix[l][r] < target) l++;
            else r--;
        }
        return false;
    }
};
// @lc code=end

