/*
 * @lc app=leetcode.cn id=239 lang=cpp
 *
 * [239] 滑动窗口最大值
 */

// @lc code=start
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        if(k >= 1 && k <= nums.size())
        {
            //deque记录滑动窗口最大值数字下标
            deque<int> index;
            for(int i = 0; i < k; i++)
            {                           
                while(!index.empty() && nums[i] >= nums[index.back()])
                    index.pop_back();
                index.push_back(i);
            }
            for(int i = k ; i < nums.size(); i++)
            {
                res.push_back(nums[index.front()]);
                while(!index.empty() && nums[i] >= nums[index.back()])
                    index.pop_back();
                if(!index.empty() && index.front() <= (i -k))
                    index.pop_front();
            }
            res.push_back(nums[index.front()]);          
        }
        return res;
    }
};
// @lc code=end

