/*
 * @lc app=leetcode.cn id=235 lang=cpp
 *
 * [235] 二叉搜索树的最近公共祖先
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
TreeNode* traversal(TreeNode* cur, TreeNode* p, TreeNode* q) {
        if (cur->val > p->val && cur->val > q->val) {
            return traversal(cur->left, p, q);
        } else if (cur->val < p->val && cur->val < q->val) {
            return traversal(cur->right, p, q);
        } else return cur;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        return traversal(root, p, q);
    }

};
// @lc code=end

