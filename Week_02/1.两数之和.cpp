/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //map key-保存数组值,value保存下标,遍历的同时查找符合target - nums[i]值
        //时间O(n),空间O(n)
        std::unordered_map<int,int> map;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++)
        {
            if(map.find(target - nums[i]) != map.end() && map[target - nums[i]] != i)
            {
                res.push_back(i);
                res.push_back(map[target - nums[i]]);              
            }
            map.emplace(nums[i],i);
        }
        return res;
        
    }
};
// @lc code=end

