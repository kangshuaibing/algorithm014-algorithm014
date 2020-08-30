/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
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
    long last = LONG_MIN;//父节点最大值
    bool flag = true; // 父节点是大于子节点
    bool isValidBST(TreeNode* root) {
        //BFS -->中序遍历递增
        if(!root) return true;
        if(flag && root->left)
            isValidBST(root->left);
        
        if(root->val <= last)
            flag = false;
        last = root->val;

        if(flag && root->right)
            isValidBST(root->right);

        return flag;
        
    }
};
// @lc code=end

