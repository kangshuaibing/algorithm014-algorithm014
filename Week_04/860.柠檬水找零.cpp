/*
 * @lc app=leetcode.cn id=860 lang=cpp
 *
 * [860] 柠檬水找零
 */

// @lc code=start
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        //哈希表
        unordered_map<int,int> map;
        for(int i: bills)
        {
            if(i == 5) map[5]++;
            else if(i == 10)
            {
                map[10]++;
                map[5]--;
            }
            else if(i == 20 && map[10] > 0)
            {
                map[10]--;
                map[5]--;
            }
            else
                map[5]-=3;
            if(map[5] < 0)
                return false;
        }
        return true;

    }
};
// @lc code=end

