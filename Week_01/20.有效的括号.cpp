/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        //栈，时间O(n)，空间O(n)
        if(s.size() ==0)
            return true;
        if(s.size() ==1)
            return false;
        stack<char> p;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                p.push(s[i]);
            else if(s[i] ==')' && p.size()>0 && p.top() == '(')
                p.pop();
            else if(s[i] =='}' && p.size()>0 && p.top() == '{')
                p.pop();
            else if(s[i] ==']' && p.size()>0 && p.top() == '[')
                p.pop();
            else 
                return false;
        }
        
        return p.empty();

        
    }
};
// @lc code=end

