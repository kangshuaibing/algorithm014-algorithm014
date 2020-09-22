/*
 * @lc app=leetcode.cn id=968 lang=cpp
 *
 * [968] 监控二叉树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    int num;
public:
    /** 1.安装监视器；2.被监视；3.未被监视 */
    int dfs(TreeNode* root)
    {
        if(root == NULL)
            return 2;
        int left = dfs(root->left);
        int right = dfs(root->right);
        if(left ==3 || right ==3)
        {
            // 子节点未被监视，因此需要安装监视器
            num++;  
            return 1;
        }
        if(left == 1 || right ==1)
            // 子节点安装了监视器，因此已经被监视
            return 2;
        // 当前未被监视
        return 3;
    }
    int minCameraCover(TreeNode* root) {
        if(dfs(root) == 3)
            num++;
        return num;


    }
};
// @lc code=end

