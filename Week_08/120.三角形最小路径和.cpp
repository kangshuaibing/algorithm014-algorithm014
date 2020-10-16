/*
 * @lc app=leetcode.cn id=120 lang=cpp
 *
 * [120] 三角形最小路径和
 */

// @lc code=start
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> res(triangle.begin(),triangle.end());
        for(int i = n-2; i >= 0; i--)
        {
            for(int j = 0; j < res[i].size(); j++)
                res[i][j] += min(res[i+1][j], res[i+1][j+1]);
        }
        return res[0][0];
    }
};
// @lc code=end

