/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    int minDepth(TreeNode* root) {
        if(root== NULL) return 0;
         if(root->left != NULL && root->right != NULL)
            return min(minDepth(root->left),minDepth(root->right)) + 1;
         if(root->left ==NULL)
            return minDepth(root->right) + 1;
         else
            return minDepth(root->left) + 1;
    }
};
// @lc code=end

