/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        //贪心
        // sort(g.begin(),g.end());
        // sort(s.begin(),s.end());
        
        // int res = 0;
        // int gLength = g.size(),sLength = s.size();
        // int i = 0, j = 0;
        // while(i < gLength && j < sLength)
        // {
        //     if(g[i] <= s[j])
        //     {
        //         res +=1;
        //         i++;
        //         j++;
        //     }
        //     else
        //         j++;
        // }
        // return res;

        std::sort(g.begin(),g.end());
        std::sort(s.begin(),s.end());
        int child=0;
        int cookie = 0;
        while(cookie<s.size()&&child<g.size()){
            if(g[child]<=s[cookie]){
                child++;
            } 
            cookie++;
        }
        return child;




    }
};
// @lc code=end

