/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
 */

// @lc code=start
class Solution {
public:
    int fib(int N) {
        int a1 = 0;
		int a2 = 1;
		int temp;
		if (N == 0)
			return 0;
		for (int i = 1; i < N; ++i)  //值需要更新n-1次
		{
			temp = a2;
			a2 = a1 + a2;
			a1 = temp;
		}
		return a2;

    }
};
// @lc code=end

