/*
 * @lc app=leetcode.cn id=1021 lang=cpp
 *
 * [1021] 删除最外层的括号
 */

// @lc code=start
class Solution {
public:
    string removeOuterParentheses(string S) {
        string res;
        int l = 0,r = 0;
        for(int i = 0;i < S.size(); i++)
        {
            if(S[i] == '(')
                l++;
            else
                r++;
            
            if(l == r)
            {
                l = 0;
                r = 0; 
                continue;
            }
            
            else if (l == 1)
                continue;
                
            res += S[i];
        }
        return res;

    }
};
// @lc code=end

