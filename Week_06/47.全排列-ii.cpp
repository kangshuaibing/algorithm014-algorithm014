/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
 */

// @lc code=start
class Solution {
public:
    vector<int> visited;
    void backtrack(vector<vector<int>> &res, vector<int>& nums, vector<int>& path, int index)
    {
        if(nums.size() == index)
        {
            res.push_back(path);
            return;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(visited[i] || (i > 0 && nums[i-1] == nums[i] && !visited[i-1]))
                continue;
            path.push_back(nums[i]);
            visited[i] = 1;
            backtrack(res, nums, path, index+1);
            visited[i] = 0;
            path.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> path;
        visited.resize(nums.size());
        sort(nums.begin(),nums.end());

        backtrack(res, nums, path, 0);
        return res;    
    }
};
// @lc code=end

