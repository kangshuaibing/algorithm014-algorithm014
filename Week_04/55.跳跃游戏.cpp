/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        //贪心
        // int n = nums.size();
        // int reach = 0;
        // for(int i = 0; i < n; i++)
        // {
        //     if(i > reach)
        //          return false;  
        //     reach = max(i + nums[i], reach);    
        // }
        // return true;

        //贪心-优化
        // int n = nums.size();
        // int reach = 0;
        // for(int i = 0; i <= reach && reach < n -1; i++)
        //     reach = max(i + nums[i], reach);    
        // return reach >= n - 1;

        //最早开始位置-从后往前更新
        int n = nums.size();
        int last = n - 1;
        for(int i = n - 2; i >= 0; i--)
            if(i + nums[i] >= last)
                last = i;
            return last == 0;

    }
};
// @lc code=end

