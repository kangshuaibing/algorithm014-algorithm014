/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = INT_MIN,minPrice = 0;
        for(int i = 0; i < prices.size(); i++)
        {
            maxProfit = max(maxProfit, prices[i] - minPrice);
            minPrice = min(prices[i],minPrice);
            
        }
        return maxProfit;


    }
};
// @lc code=end

