/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */

// @lc code=start
class Solution {
    vector<vector<int>> res;
public:

    void backtrack(vector<int>& nums, int start, vector<int>& track) {
    res.push_back(track);
    for (int i = start; i < nums.size(); i++) {
        // 做选择
        track.push_back(nums[i]);
        // 回溯
        backtrack(nums, i + 1, track);
        // 撤销选择
        track.pop_back();
    }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> track;
        backtrack(nums,0,track);
        return res;
    
    }
    


};
// @lc code=end

