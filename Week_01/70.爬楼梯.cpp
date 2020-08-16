/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)
            return n;
        int* array = new int[n];
        for(int i=0; i<n; i++)
        {
            if(i<=1)
                array[i] = i+1;
            else
            {
                array[i] = array[i-1] + array[i-2];
            }
        }
        return array[n-1];   

    }
};
// @lc code=end

