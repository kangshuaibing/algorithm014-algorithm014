/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //异或:不论什么一个数字异或它自己都等于0
        int res = 0;
        for(auto curr : nums)
            res ^= curr;
        return res;

    }
};
// @lc code=end

