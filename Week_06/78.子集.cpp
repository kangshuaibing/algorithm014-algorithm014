/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */

// @lc code=start
class Solution {
public:
    void backtrack(vector<vector<int>>& res,vector<int>& nums,vector<int>& path, int index)
    {
        res.push_back(path);
        for(int i = index; i < nums.size(); i++)
        {
            path.push_back(nums[i]);
            backtrack(res, nums, path, i + 1);
            path.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> path;
        backtrack(res, nums, path, 0);
        return res;
        
    }
};
// @lc code=end

