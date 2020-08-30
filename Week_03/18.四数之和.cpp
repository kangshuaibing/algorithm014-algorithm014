/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         //四指针
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        if(nums.size() < 4)
            return res;
        
        for(int a = 0; a < nums.size() - 3; a++)
        {
            if(a > 0 && nums[a] == nums[a - 1]) continue;
            for(int b = a + 1; b < nums.size() - 2; b++)
            {
                if(b > a + 1 && nums[b] == nums[b - 1]) continue;
            
                int c = b + 1;
                int d = nums.size() - 1;
                while(c < d)
                {
                    int sum = nums[a] + nums[b] +nums[c] +nums[d];
                     if(sum < target)
                        c++;
                    else if (sum > target)
                        d--;
                   else
                    {
                        vector<int> temp;
                        temp.push_back(nums[a]);
                        temp.push_back(nums[b]);
                        temp.push_back(nums[c]);
                        temp.push_back(nums[d]);
                        res.push_back(temp);
                        
                        while(c<d&&nums[c+1]==nums[c])      
        				    c++;
        				while(c<d&&nums[d-1]==nums[d])      
        				    d--;
        				c++;
        				d--;

                    }
                }
            }
        }
        return res;
        
    }
};
// @lc code=end

