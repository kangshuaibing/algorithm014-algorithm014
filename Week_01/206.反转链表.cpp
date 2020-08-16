/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    ListNode* reverseList(ListNode* head) {
         //迭代，时间O(n),空间O(1)
        ListNode* last = NULL;
        ListNode* cur = head;

        while(cur != NULL)
        {
            ListNode* temp = cur->next;
            cur->next = last;   
            last = cur;
            cur = temp;
        }
        return last;

    }
};
// @lc code=end

