/*
 * @lc app=leetcode.cn id=160 lang=c
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* p=headA;
    struct ListNode* q=headB;
    while (p!=q)
    {
        if(p)
            p=p->next;
        else
            p=headB;
        if(q)
            q=q->next;
        else
            q=headA;
    }
    return p;
}
// @lc code=end

