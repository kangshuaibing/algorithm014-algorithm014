/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 最接近的三数之和
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        //双指针，借鉴三数之和
        sort(nums.begin(),nums.end());
        int res = nums[0] + nums[1] + nums[2];
        for(int i = 0; i <nums.size() -2; i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            int left = i + 1, right = nums.size() - 1;
            while(left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if(abs(target - res) > abs(target - sum))
                    res = sum;
                if(sum == target)
                    return target;
                else if(sum < target)
                {
                    left++;
                }
                else 
                    right--;
            }
        }
        return res;
    }
};
// @lc code=end

