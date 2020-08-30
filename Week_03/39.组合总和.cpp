/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start
class Solution {
        vector<vector<int>> res;
        vector<int> a;
        vector<int> nums;
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        sort(candidates.begin(),candidates.end());
        this->nums = move(candidates);
        dfs(0,target);
        return res;
    }
    void dfs(int curr, int target){
        if(target == 0)
        {
            res.push_back(a);
            return;
        }
        for(int i =curr;i<nums.size();i++)
        {
            if(target-nums[i]<0)
                break;
            a.push_back(nums[i]);
            dfs(i,target-nums[i]);
            a.pop_back();
        }
    }
};
// @lc code=end

