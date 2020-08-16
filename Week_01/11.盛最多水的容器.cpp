/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        for(int i = 0; i < height.size() - 1; i++)
        {
            for(int j = i; j <height.size(); j++)
            {
                int area =(j - i) * min(height[i],height[j]);
                maxArea = max(maxArea, area);
            }
        }
        return maxArea;
        
    }
};
// @lc code=end

