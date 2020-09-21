/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
 */

// @lc code=start
class Solution {
public:
    int fib(int N) {
        vector<int> dp;
        dp.push_back(0);
        dp.push_back(1);
		for (int i = 2; i <= N; i++)  
		{
            dp.push_back(dp[i-1] + dp[i-2]);
		}
		return dp[N];

    }
};
// @lc code=end

