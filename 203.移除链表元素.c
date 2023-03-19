/*
 * @lc app=leetcode.cn id=203 lang=c
 *
 * [203] 移除链表元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    while ((head)&&head->val==val)
        head=head->next;
    if(!head)
        return NULL;
    struct ListNode* pre=head;
    struct ListNode* p=head->next;
    while (p)
    {
        if(p->val==val)
        {
            pre->next=p->next;
            p=p->next;
        }
        else
        {
            pre=p;
            p=p->next;
        }
    }
    return head;
}
// @lc code=end

