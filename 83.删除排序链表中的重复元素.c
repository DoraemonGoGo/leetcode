/*
 * @lc app=leetcode.cn id=83 lang=c
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode* p=head;
    while (p)
    {
        if(p->next&&p->val==p->next->val)
        {
            struct ListNode* q=p->next;
            while (q&&q->val==p->val)
                q=q->next;
            p->next=q;
        }
        p=p->next;
    }
    return head;
}
// @lc code=end

