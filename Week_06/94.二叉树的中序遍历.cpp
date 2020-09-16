/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
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
    void trackval(TreeNode* root,vector<int> &path)
    {
        if(root == NULL) return;

        trackval(root->left, path);
        path.push_back(root->val);
        trackval(root->right, path);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        trackval(root,res);
        return res;

    }
};
// @lc code=end

