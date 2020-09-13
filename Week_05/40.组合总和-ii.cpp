/*
 * @lc app=leetcode.cn id=40 lang=cpp
 *
 * [40] 组合总和 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    void DFS(vector<int>& candidates, int target, int sum, int index)
    {
        if(sum > target)
            return;
        if(sum == target)
        {
            res.push_back(path);          
        }
        for(int i = index; i < candidates.size(); i++)
        {
            if(i > index && candidates[i] == candidates[i-1])
                continue;
            sum += candidates[i];
            path.push_back(candidates[i]);
            DFS(candidates, target, sum, i + 1);

            sum-=candidates[i];
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        DFS(candidates, target, 0 ,0);
        return res;
          
    }
};
// @lc code=end

