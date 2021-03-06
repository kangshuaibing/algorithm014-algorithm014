/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {
        //双指针，高度取决于较低的一侧
        //时间复杂度O(n)空间O(1)
        int left = 0, right = height.size() - 1;
        int left_max = 0, right_max = 0;
        int ans = 0;
        while(left < right)
        {
            if(height[left] < height[right])
            {
                if(height[left] >= left_max) left_max = height[left];
                else ans += (left_max - height[left]);
                left++;
            }
            else{
                if(height[right] >= right_max) right_max = height[right];
                else ans += (right_max - height[right]);
                --right;
            }
        }
        return ans;
        
    }
};
// @lc code=end

