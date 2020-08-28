/*
 * @lc app=leetcode.cn id=264 lang=cpp
 *
 * [264] 丑数 II
 */

// @lc code=start
class Solution {
public:
    int nthUglyNumber(int n) {
        /*
        //暴力求解,求出所有排序
        vector<int> res;   
        for(int i = 0; i <= INT_MAX; i=i*2)      
            for(int j = i; j <= INT_MAX; j=j*3)         
                for(int k = j; k <= INT_MAX; k=k*5)
                    res.push_back(k);
        sort(res.begin(),res.end());      
        return res.at(n);
        */

        //三指针，同i相乘的最小丑数的位置
        vector<int> res(n);
        int p2 = 0 ,p3 = 0,p5 = 0;
        res.at(0) = 1;
        for(int i = 1; i < n; i++)
        {
            res.at(i) = min(min(res.at(p2)*2,res.at(p3)*3),res.at(p5)*5);
            if(res.at(i) == res.at(p2)*2)
                p2++;
            if(res.at(i) == res.at(p3)*3)
                p3++;
            if(res.at(i) == res.at(p5)*5)
                p5++;
        }
        return res.at(n-1);
    }
};
// @lc code=end

