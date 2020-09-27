/*
 * @lc app=leetcode.cn id=152 lang=cpp
 *
 * [152] 乘积最大子数组
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        else if(n == 1) return nums[0];
        int res =  nums[0];
        int maxP =  nums[0];
        int minP =  nums[0];
        for(int i = 1; i < n; i++)
        {
            int temp = maxP;
            maxP = max(max(maxP * nums[i], nums[i]), minP * nums[i]);
            minP = min(min(temp * nums[i], nums[i]), minP * nums[i]);
            res = max(maxP, res);
        }
        return res;


    }
};
// @lc code=end

