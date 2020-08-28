/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
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
    void travelsal(TreeNode* cur, vector<int>& vec)
    {
        if( cur == NULL)
            return;
        vec.push_back(cur->val);
        travelsal(cur->left,vec);   
        travelsal(cur->right,vec);    
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        travelsal(root,res);
        return res;

    }
};
// @lc code=end

