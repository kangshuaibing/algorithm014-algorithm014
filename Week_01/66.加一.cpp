/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //9+1和其他+1,依次加1不出现进位就运算结束了
        //全是9，首位填1即可
        for(int i = digits.size() - 1; i >= 0; i--)
        {
            digits[i]++;
            digits[i] = digits[i]%10;
            if(digits[i] !=0)
                return digits;
        }
        digits.resize(digits.size() + 1);
        digits[0] = 1;
        return digits;

    }
};
// @lc code=end

