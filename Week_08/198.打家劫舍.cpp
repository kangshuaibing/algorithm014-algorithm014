/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        //dp dp[i] = max(dp[i-2]+dp[i],dp[i-1])
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];

        int pre = nums[0], last = max(nums[0],nums[1]);
        for(int i = 2; i<n; i++)
        {
            int temp = last;
            last = max(pre +nums[i], last);
            pre = temp;
        }
        return last;

    }
};
// @lc code=end

