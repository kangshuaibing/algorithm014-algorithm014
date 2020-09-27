/*
 * @lc app=leetcode.cn id=501 lang=cpp
 *
 * [501] 二叉搜索树中的众数
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
    vector<int> findMode(TreeNode* root) {
        vector<int> res;
        unordered_map<int,int> map;
        stack<TreeNode*> stk;
        stk.push_back(root);
        map[root->val]++;

        while(stk)
        {
            TreeNode* temp = stk.top();
            stk.pop();
            map[temp->val]++;
            if(temp->left) stk.push(temp->left);
            if(temp->right) stk.push(temp->right);
        }
        

    }
};
// @lc code=end

