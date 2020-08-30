/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
        //分治
        /*templete 
        1.terminator 2.process(split your big problem)
        3.dril down(subproblems), merge(subresult) 4.reverse states

        x^n --> 2^10, 2^5 -> (2^2)*2
        pow(x,n):
            subproblem: subresult = pow(x, n/2)

        merge:
            if n % 2 == 1{
                //odd
                result = subresult * subresult * t;
            }else{
                //even
                result = subresult * subresult;
            }
        */
        double fastPow(double x , long long n)
        {
            if(n == 0) return 1.0;

            double half = fastPow(x, n / 2);
            if(n % 2)  
                return half * half * x;
            return half * half;
        }
        double myPow(double x, int n) {
        long long N = n;
        if(N < 0)
        {
            x = 1 /  x;
            N = -N;
        }
        return fastPow(x, N);

    }
};
// @lc code=end

