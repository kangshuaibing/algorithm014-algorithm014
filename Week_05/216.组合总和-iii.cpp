/*
 * @lc app=leetcode.cn id=216 lang=cpp
 *
 * [216] 组合总和 III
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    void DFS(vector<int>& nums, int k, int target, int index, int sum)
    {
        if(sum > target || path.size() > k)
            return;
        if(sum == target && path.size() == k)
            res.push_back(path);
        for(int i = index; i < nums.size(); i++)
        {
            sum += nums[i];
            path.push_back(nums[i]);
            DFS(nums, k, target, i + 1, sum);
            sum -= nums[i];
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums;
        for(int i = 1; i <= 9; i++)
            nums.push_back(i);
        DFS(nums, k, n, 0, 0 );
        return res;
    }
};
// @lc code=end

