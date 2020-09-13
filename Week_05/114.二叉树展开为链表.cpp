/*
 * @lc app=leetcode.cn id=114 lang=cpp
 *
 * [114] 二叉树展开为链表
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorderTraversal(TreeNode* root,vector<TreeNode*> res)
    {
        if(root == NULL) return;
        res.push_back(root);
        preorderTraversal(root->left,res);
        preorderTraversal(root->right,res);

    }
    void flatten(TreeNode* root) {
        // if(root == null) return;
        // flatten(root->left);
        // flatten(root->right);
        // TreeNode temp = root->right;
        // root->right = root->left;
        // root->left = null;
        // while(root->right != NULL)
        //     root = root->right;
        // root->right = temp;

        vector<TreeNode*> res;
        preorderTraversal(root, res);
        for(int i = 1; i < res.size(); i++)
        {
            TreeNode* temp = res[i - 1], curr = res[i];
            temp->left = NULL;
            temp->right = curr;

        }
        
    }
};
// @lc code=end

