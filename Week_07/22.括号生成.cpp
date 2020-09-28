/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
public:
void dfs(vector<string> &res,int left, int right, int n, string s)
{
    if(left == n && right == n)
    {
        cout<<s<<endl;
        res.emplace_back(s);
        return;
    }
    if(left < n) dfs(res, left+1, right, n, s+"(");
    if(left > right)  dfs(res, left, right+1, n, s+")");
}
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        dfs(res, 0, 0, n, "");
        return res;
    }
};
// @lc code=end

