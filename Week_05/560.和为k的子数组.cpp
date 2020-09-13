/*
 * @lc app=leetcode.cn id=560 lang=cpp
 *
 * [560] 和为K的子数组
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //前缀和+哈希
        unordered_map<int,int> map;
        map[0] = 1;
        int count = 0, pre = 0;
        for(auto x:nums)
        {
            pre += x;
            if(map.find(pre - k) != map.end())
                count += map[pre - k];
            map[pre]++;
        }
        return count; 
        

        // //遍历两次
        // int res = 0;
        // for(int start = 0; start < nums.size(); start++)
        // {
        //     int sum = 0;
        //     for(int end = start; end >=0; end--)
        //     {
        //         sum +=nums[end];
        //         if(sum == k)
        //             res++;
        //     }
        // }
        // return res;

    }
};
// @lc code=end

