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
    vector<int> preorder(Node* root) {
        //迭代
        vector<int> res;
        if(!root) return res;
        stack<Node*> stk;
        stk.push(root);

        while(root)
        {
            Node* curr = stk.top();
            stk.pop();
            res.push_back(curr->val);
            for(int i = 0; i < curr->children.size(); i++)
            {
                stk.push(curr->children[i]);
            }
        }
        return res;
        
    }
};
// @lc code=end

