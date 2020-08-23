/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
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
public:
    int getDepth(TreeNode* root)
    {
        if(root == NULL) return 0;
        return max(getDepth(root->left),getDepth(root->right)) + 1;
    }
    int maxDepth(TreeNode* root) 
    {
        return getDepth(root);
        
    }
};
// @lc code=end

