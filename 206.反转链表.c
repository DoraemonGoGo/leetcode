/*
 * @lc app=leetcode.cn id=206 lang=c
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    if(!head||(!head->next))
        return head;
    struct ListNode* p=reverseList(head->next);
    head->next->next=head;
    head->next=NULL;
    return p;
}
// @lc code=end

