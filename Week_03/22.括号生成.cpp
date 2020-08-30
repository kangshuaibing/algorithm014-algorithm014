/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
    vector<string> res;
public:
    void generte(int left, int right, int n, string s)
    {
        //terminator
        if(left == n && right == n)
        {
            //cout<<s;
            res.push_back(s);
            return;
        }
        //process
  
        //drill down
        if(left < n) generte(left + 1, right, n,  s + "(");
        if(left  > right) generte(left, right + 1, n, s + ")");

        //reverse states
    }
    vector<string> generateParenthesis(int n) {
        //left可以加，只要不超标
        //right 左个数>右个数
        generte(0, 0, n, "");
        return res;
        
    }
};
// @lc code=end

