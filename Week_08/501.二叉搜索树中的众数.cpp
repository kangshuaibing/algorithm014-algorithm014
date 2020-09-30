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
vector<int> res;
int curr, currCount, maxCount;
public:
    void update(int x)
    {
        if(x == curr)
            currCount++;
        else
        {
            curr = x;
            currCount = 1;
        }
        if(currCount ==maxCount)
        {
            res.push_back(curr);
        }
        if(currCount> maxCount)
        {
            maxCount = currCount;
            res.clear();
            res.push_back(x);
        }
    }
    void DFS(TreeNode* root)
    {
        if(root == nullptr)
            return;
        DFS(root->left);
        update(root->val);
        DFS(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        DFS(root);
        return res;
    }
};
// @lc code=end

