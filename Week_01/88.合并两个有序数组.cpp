/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;
	    int i = 0, j = 0, p = 0;
	    while (i < m && j < n)
	    {
		if (nums1[i] >= nums2[j])
			res.push_back(nums2[j++]);
		else
			res.push_back(nums1[i++]);
		p++;

	    }
	    if (i < m)
		    res.insert(res.end(), nums1.begin() + i, nums1.begin() + m);
	    else if (j < n)
		    res.insert(res.end(), nums2.begin() + j, nums2.begin() + n);

        nums1.assign(res.begin(), res.end());
    }


        
    }
};
// @lc code=end

