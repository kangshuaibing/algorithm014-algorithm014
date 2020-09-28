/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> res;
        unordered_set<int> nums(nums1.begin(),nums1.end());
        for(auto curr:nums2)
            if(nums.find(curr)!=nums.end())
                res.insert(curr);
        return vector<int> (res.begin(),res.end());

    }
};
// @lc code=end

