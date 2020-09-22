/*
 * @lc app=leetcode.cn id=347 lang=cpp
 *
 * [347] 前 K 个高频元素
 */

// @lc code=start
class Solution {
public:
// 小顶堆
    class mycom {
    public:
        bool operator()(const pair<int, int>& lhs, const pair<int, int>& rhs) {
            return lhs.second > rhs.second;
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int,int> map;
        for(int curr : nums)
            map[curr]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,mycom> queue;
        for(auto it = map.begin(); it!= map.end(); it++)
        {
            queue.push(*it);
            if(queue.size() > k)
                queue.pop();
        }
        for (int i = k - 1; i >= 0; i--) {
            res.push_back(queue.top().first);
            queue.pop();
        }
        return res;
    }
};
// @lc code=end

