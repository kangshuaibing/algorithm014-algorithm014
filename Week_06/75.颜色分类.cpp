/*
 * @lc app=leetcode.cn id=75 lang=cpp
 *
 * [75] 颜色分类
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int p0 = 0, curr = 0;
        int p2 = nums.size() - 1;
        while(curr <= p2)
        {
            if(nums[curr] == 0)
            {
                swap(nums[curr],nums[p0]);
                curr++;
                p0++;
            }
            else if(nums[curr] == 2)
            {
                swap(nums[curr],nums[p2]);
                curr;//不能-1，可能和1交换
                p2--;
            }
            else
                curr++;
        }
        
    }
};
// @lc code=end

