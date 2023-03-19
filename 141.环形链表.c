/*
 * @lc app=leetcode.cn id=141 lang=c
 *
 * [141] 环形链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if(!head||!(head->next))
        return false;
    struct ListNode* slow=head;
    struct ListNode* fast=head->next;
    while (slow&&fast)
    {
        if(fast==slow)
            return true;
        if(!(slow->next)||!(fast->next))
            return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    return false;
}
// @lc code=end

