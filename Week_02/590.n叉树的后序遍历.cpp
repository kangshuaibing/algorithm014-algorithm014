/*
 * @lc app=leetcode.cn id=590 lang=cpp
 *
 * [590] N叉树的后序遍历
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
    void postorder(Node* cur,vector<int>& vec)
    {
        if(cur == NULL) return;
        for(int i = 0; i <cur->children.size(); i++)
        {
            postorder(cur->children.at(i),vec);
        }
        vec.push_back(cur->val);
    }
    vector<int> postorder(Node* root) {
        //N叉树没有中序遍历
        vector<int> res;
        postorder(root, res);
        return res;    
    }
};
// @lc code=end

