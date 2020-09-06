/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int> map;
        // for(int i = 0;i < nums.size();i++)       
        //     map[nums[i]]++;
        // for(unordered_map<int,int>::iterator it = map.begin(); it != map.end();it++)
        //     if(it->second > nums.size() / 2)
        //         return it->first; 
        // return -1;

        //简化代码
        unordered_map<int,int> map;
        for(int num : nums) 
            if(++map[num] > nums.size() / 2)
                return num;
        return -1;    

        //排序
        // sort(nums.begin(), nums.end());
        // return nums[nums.size() / 2]; 
        
    }
};
// @lc code=end

