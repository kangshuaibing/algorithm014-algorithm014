/*
 * @lc app=leetcode.cn id=153 lang=cpp
 *
 * [153] 寻找旋转排序数组中的最小值
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        int res = 0;
        while(i < j)
        {
            res = (i + j) / 2;
            if(nums[res] > nums[j])
                i = res + 1;
            else if(nums[res] < nums[j])
                j = res ;
            else j -= 1;
        }
        return nums[i];

    }
};
// @lc code=end

