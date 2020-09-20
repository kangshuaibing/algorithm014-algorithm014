/*
 * @lc app=leetcode.cn id=213 lang=cpp
 *
 * [213] 打家劫舍 II
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
       //拆分[1,n-1],[1,n-2]子问题，求最大值
        int size = nums.size();
        if(size == 0) return 0;
        if(size == 1) return nums[0];

        vector<int> dp(size + 1, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for(int i = 2; i < size - 1; i++)
            dp[i] = max(dp[i-2] + nums[i], dp[i-1]);
        int result =dp[size-2];

        dp[0] = 0;
        dp[1] = nums[1];
        for(int i = 2; i < size; i++)
            dp[i] = max(dp[i-2] + nums[i], dp[i-1]);

        result = max(result,dp[size-1]);
        return result;
    }
};
// @lc code=end

