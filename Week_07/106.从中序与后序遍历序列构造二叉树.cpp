/*
 * @lc app=leetcode.cn id=106 lang=cpp
 *
 * [106] 从中序与后序遍历序列构造二叉树
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
    //后续最后一个节点为根节点，找到在中序中的位置middle
    //将中序遍历划分为(inStart,middle-1),(middle+1,inEnd)
    //将后续遍历划分为(postStart,poStart+middle-Instart-1),(postStart+middle-inStart,postEnd-1)
    //递归分别求左右子树
        TreeNode*  helper(vector<int>& inorder, vector<int>& postorder, int inStart, int inEnd, int postStart, int postEnd)
    {
        if(inStart > inEnd || postStart > postEnd) return nullptr;
        TreeNode* root = new TreeNode(postorder[postEnd]);

        int middle = 0;
        for(auto curr: inorder) 
        {
            if(curr != postorder[postEnd]) middle++;
            else break;
        }
     
        root->left = helper(inorder, postorder, inStart, middle-1, postStart, postStart+middle-inStart-1);
        root->right = helper(inorder, postorder, middle+1, inEnd, postStart+middle-inStart,postEnd-1);
             
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size() == 0 || postorder.size() == 0)
            return nullptr;
        int inStart = 0, postStart = 0;
        int inEnd = inorder.size()-1;
        int postEnd = postorder.size()-1;

        return helper(inorder, postorder, inStart, inEnd, postStart, postEnd);       
    }
};
// @lc code=end

