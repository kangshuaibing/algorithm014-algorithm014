/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
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
    bool hasCycle(ListNode *head) {
        //快慢指针
        if(head == NULL)
            return false;
        ListNode *slow = head;
        ListNode *fast = head->next;
        while(fast != slow)
        {
            if(fast == NULL || slow == NULL)
                return false;
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
        
    }
};
// @lc code=end

