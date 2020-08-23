/*
 * @lc app=leetcode.cn id=589 lang=cpp
 *
 * [589] N叉树的前序遍历
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void preorder(Node* cur,vector<int>& vec)
    {
        if(cur == NULL) return;
        vec.push_back(cur->val);
        for(int i = 0; i <cur->children.size(); i++)
        {
            preorder(cur->children.at(i),vec);
        }
    }
    vector<int> preorder(Node* root) {
        //N叉树没有中序遍历
        vector<int> res;
        preorder(root, res);
        return res;        
    }
};
// @lc code=end

