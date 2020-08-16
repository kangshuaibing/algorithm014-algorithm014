/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 旋转数组
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        /*
        //旋转k次，每次旋转移动1个位置       
                for(int i = 0; i < k; i++)
        {
            int last = nums[nums.size() - 1];
            int temp;
            for(int j = nums.size() - 1 ; j > 0; j--)
            {
                nums[j] = nums[j - 1];
            }
            nums[0] = last;
        }
        */    
        k %= nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()  + k ); 
        reverse(nums.begin() +  k , nums.end());
        
    }
};
// @lc code=end

