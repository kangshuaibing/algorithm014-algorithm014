/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    void BFS(vector<int>& candidates, int target, int sum,int index)
    {
        if(sum > target)
            return;
        if(sum == target)
        {
            res.push_back(path);
        }
        for(int i = index; i < candidates.size(); i++)
        {
            sum += candidates[i];
            path.push_back(candidates[i]);
            BFS(candidates, target, sum, i);
            sum -= candidates[i];
            path.pop_back();

        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        //回溯
        BFS(candidates, target, 0, 0);
        return res;
    }
};
// @lc code=end

