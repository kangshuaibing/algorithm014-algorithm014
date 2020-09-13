/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:

    int maxSubArray(vector<int>& nums) {
        //DP dp = max(dp[i−1]+nums[i], nums)
        int res = INT_MIN;
        int dp = nums[0];
        res = dp;
        for(int i = 1 ; i < nums.size(); i++)
        {
            dp = max(dp + nums[i], nums[i]);
            res = max(res, dp);
        }
        return res;

    //    //1.暴力
    //    if(nums.size() == 0)
    //         return 0;
    //     int max = nums[0];
    //     for(int i = 0; i < nums.size(); i++)
    //     {
    //         int sum = 0;
    //         for(int j = i; j < nums.size(); j++)
    //         {
    //             sum += nums[j];
    //             if(sum >= max)
    //                 max = sum;
    //         }
    //     }
    //     return max;
        //
    }
};
// @lc code=end

