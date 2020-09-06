/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        //二分法
        int l = 0, r = num, mid = 0;      
        while(l <= r)
        {
            mid = l + (r - l) / 2;
            if(num == mid * mid)
                return true;
            else if(num < mid * mid)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return false;

    }
};
// @lc code=end

