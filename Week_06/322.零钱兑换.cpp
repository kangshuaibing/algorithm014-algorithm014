/*
 * @lc app=leetcode.cn id=322 lang=cpp
 *
 * [322] 零钱兑换
 */

// @lc code=start
class Solution {
public:
    int helper(vector<int>& dp, int amount, vector<int>& coins)
    {
        if(amount == 0) return 0;
        if(dp[amount != 0]) return dp[amount];

        int res = amount + 1;
        for(auto coin : coins)
        {
            if(amount - coin < 0) continue;

            int subProblem = helper(dp, amount - coin, coins);
            if(subProblem == -1) continue;
            res = min(res, subProblem + 1);
        }
        dp[amount] = res == (amount+1)? -1 : res;
        return dp[amount] ;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, 0);
        return helper(dp, amount, coins);

    }
};
// @lc code=end

