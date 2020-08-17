/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //时间O(mlogm+nlogn)-数组排序时间
       //空间O(min(m,n))
        vector<int> res;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int length1 = nums1.size(),length2 = nums2.size();
        int index1 = 0, index2 = 0;
        while(index1 < length1 && index2 < length2)
        {
            if(nums1[index1] < nums2[index2])
                index1++;
            else if(nums1[index1] > nums2[index2])
                index2++;
            else
            {
                res.push_back(nums1[index1]);
                index1++;
                index2++;
            }
        }
        return res;

    }
};
// @lc code=end

