/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if(list1==NULL)
        return list2;
    if(list2==NULL)
        return list1;
    struct ListNode* p=list1;
    struct ListNode* q=list2;
    struct ListNode* head=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* tail=head;
    while (p&&q)
    {
        if(p->val>q->val)
        {
            tail->next=q;
            tail=q;
            q=q->next;
        }
        else
        {
            tail->next=p;
            tail=p;
            p=p->next;
        }
    }
    tail->next=NULL;
    if(p)
        tail->next=p;
    if(q)
        tail->next=q;
    return head->next;
}
// @lc code=end

