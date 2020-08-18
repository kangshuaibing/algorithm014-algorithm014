/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //unordered_map底层实现hash表，查找速度快
        vector<vector<string>> res;
	    unordered_map<string, vector<string>> m;
	    for (auto& e : strs)
	    {
		    string tt = e;
		    sort(e.begin(), e.end());
		    m[e].emplace_back(tt);
	    }
	    for (auto& e : m)
	    {
		    res.emplace_back(e.second);
	    }
	    return res;        
    }
};
// @lc code=end

