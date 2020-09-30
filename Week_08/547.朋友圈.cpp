/*
 * @lc app=leetcode.cn id=547 lang=cpp
 *
 * [547] 朋友圈
 */

// @lc code=start
class Solution {
public:
    void dfs(vector<vector<int>>& M,vector<int>& visited,int index)
    {
        for(int i = 0; i < M.size();i++)
        {
            if(visited[i] == 0 && M[index][i]==1)
            {          
                visited[i] =1;
                dfs(M,visited,i);
            }
        }

    }
    int findCircleNum(vector<vector<int>>& M) {
        int count = 0;
        vector<int> visited(M.size(),0);
        for(int i = 0; i < M.size();i++)
        {
            if(visited[i] == 0)
            {          
                dfs(M,visited,i);
                count++;
            }
        }
        return count;

    }
};
// @lc code=end

