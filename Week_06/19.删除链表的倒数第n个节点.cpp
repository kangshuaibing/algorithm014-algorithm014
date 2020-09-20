/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第N个节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    //头结点前再加一个节点防止只有一个节点时越界
        ListNode* header = new ListNode(0);
        header->next = head;
        ListNode* p = header;
        ListNode* q = header;
        for(int i = 0; i < n+1; i++)
            p = p->next;
        while(p != NULL){
            p = p->next;
            q = q->next;
        }
        q->next = q->next->next;
        return header->next;
        
    }
};
// @lc code=end

