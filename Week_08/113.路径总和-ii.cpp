/*
 * @lc app=leetcode.cn id=113 lang=cpp
 *
 * [113] 路径总和 II
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
    vector<vector<int>> res;
public:
    //DFS
    void backtrack(TreeNode* root,vector<int>& path, int sum)
    {
        if(root == nullptr)
            return;
        
        path.push_back(root->val);
        if(sum ==root->val && root->left == nullptr && root->right==nullptr)
            res.push_back(path);
        backtrack(root->left,path,sum-root->val);
        backtrack(root->right,path,sum-root->val);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root,int sum) {
        vector<int> path;
        backtrack(root,path,sum);
        return res;
    }
};
// @lc code=end

