/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root == NULL) return res;

        queue<TreeNode*> que;
        que.push(root);

        while(!que.empty())
        {
            int size = que.size();
            vector<int> level;
            while(size--)
            {                      
                auto curr = que.front();
                que.pop();
                if(!curr) continue;
                level.push_back(curr->val);
                if(curr->left != NULL) que.push(curr->left);
                if(curr->right != NULL) que.push(curr->right);
            }
            if(level.size()!=0)
            {
                res.push_back(level);
            }
            
        }
        return res;
        
    }
};
// @lc code=end

