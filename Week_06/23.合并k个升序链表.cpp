/*
 * @lc app=leetcode.cn id=23 lang=cpp
 *
 * [23] 合并K个升序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
struct cmp{  
       bool operator()(ListNode *a,ListNode *b){
          return a->val > b->val;
       }
       };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,cmp> pri_queue;
        for(auto elem : lists)
            if(elem)
                pri_queue.push(elem);
        
        ListNode temp(-1);
        ListNode *p = &temp;
        while(!pri_queue.empty())
        {
            ListNode *top = pri_queue.top();
            pri_queue.pop();
            p->next = top;
            p = top;
            if(top->next)
                pri_queue.push(top->next);
        }
        return temp.next;     
    }
};
// @lc code=end

