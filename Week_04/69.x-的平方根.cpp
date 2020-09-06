/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        long l = 0, r = x, res = -1;
        while(l <= r)
        {
            long mid = l + (r - l) / 2;
            if(mid * mid <= x)
            {
                res = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        return res;
        
    }
};
// @lc code=end

