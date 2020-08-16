/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         if(nums.size()==0)
            return;
        int j=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] !=0)
            {
                nums[j++] =nums[i];
            }
        }
        for(int i=j; i<nums.size(); i++)
        {
            nums[i] =0;
        }

        
    }
};
// @lc code=end

