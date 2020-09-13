/*
 * @lc app=leetcode.cn id=1143 lang=cpp
 *
 * [1143] 最长公共子序列
 */

// @lc code=start
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
    //二维数组
    vector<vector<int>> dp(text1.size() + 1, vector<int>(text2.size() + 1));
	//最后一行为0、最后一列为0

	for (int i = text1.size() - 1; i >= 0; --i)
	{
		for (int j = text2.size() - 1; j >= 0; --j)
		{
			if (text1.at(i) == text2.at(j))
			{
				dp.at(i).at(j) = 1 + dp.at(i + 1).at(j + 1);
			}
			else
			{
				dp.at(i).at(j) = max(dp.at(i + 1).at(j), dp.at(i).at(j + 1));
			}
		}
	}
	return dp.at(0).at(0);

    }
//     //暴力求解
//     int process1(const string& text1, const string& text2, int index1, int index2)
// {
// 	if (index1 == text1.size() || index2 == text2.size())
// 	{
// 		return 0;
// 	}

// 	if (text1.at(index1) == text2.at(index2))
// 	{
// 		return 1 + process1(text1, text2, index1 + 1, index2 + 1);
// 	}

// 	return max(process1(text1, text2, index1 + 1, index2), process1(text1, text2, index1, index2 + 1));
// }
};
// @lc code=end

