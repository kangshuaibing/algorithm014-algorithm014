/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //最优解法:当前元素非零，交换当前指针和快慢指针的元素，两个指针++。零元素，只移动当前指针
        //时间O(n)，空间O(1)
        for(int cur = 0, lastNonZero = 0; cur < nums.size(); cur++)
        {
            if(nums[cur] != 0)
            {
                swap(nums[lastNonZero++],nums[cur]);
            }
        }
        
    }
};
// @lc code=end

