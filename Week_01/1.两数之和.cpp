/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=nums.size()-1; j<nums.size(); j--)
            {
                if(i<j && nums[i] + nums[j] == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }   
            }
        }
        return res;
    }
    }
};
// @lc code=end

