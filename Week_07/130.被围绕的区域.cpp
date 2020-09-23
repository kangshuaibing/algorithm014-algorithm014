/*
 * @lc app=leetcode.cn id=130 lang=cpp
 *
 * [130] 被围绕的区域
 */

// @lc code=start
class Solution {
     int m;
     int n;
public:
    void DFS(vector<vector<char>>& board, int x, int y)
    {
        if(x<0 || x>=n || y<0 || y>=m || board[x][y] != 'O')
        {
            return;
        }

        board[x][y] = '#';//标记
        DFS(board,x+1,y);//右
        DFS(board,x,y+1);//上
        DFS(board,x-1,y);//左
        DFS(board,x,y-1);//下
    }
    void solve(vector<vector<char>>& board) {
        //DFS从边界上0开始查找相邻的0进行标记
        //遍历完整个数组，未被标记即为被包围
         n = board.size();//行数
        if(n == 0)return;//空的
        m = board[0].size();//列数

        for(int i=0;i<n;i++)
        {
            DFS(board,i,0);//第一列
            DFS(board,i,m-1);//最后一列
        }
        for(int i=0;i<m;i++)
        {
            DFS(board,0,i);//第一行
            DFS(board,n-1,i);//最后一行
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j] == '#')
                {
                    board[i][j] = 'O';
                }
                else if(board[i][j] == 'O')
                {
                    board[i][j] = 'X';
                }
            }
        }
    
    }
};
// @lc code=end

