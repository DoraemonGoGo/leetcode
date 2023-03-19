/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* head=NULL,* tail=NULL;
    struct ListNode* p=l1,* q=l2;
    int add=0;
    struct ListNode* temp=NULL;
    while (p&&q)
    {
        
        if(head==NULL)
        {
            head=malloc(sizeof(struct ListNode));
            tail=head;
            head->val=(p->val+q->val+add)%10;
            add=(p->val+q->val+add)/10;
        }
        else
        {
            temp=malloc(sizeof(struct ListNode));
            tail->next=temp;
            temp->val=(p->val+q->val+add)%10;
            add=(p->val+q->val+add)/10;
            tail=temp;
        }
        p=p->next;
        q=q->next;
    }
    if(p)
    {
        while (p)
        {
            temp=malloc(sizeof(struct ListNode));
            tail->next=temp;
             temp->val=(p->val+add)%10;
            add=(p->val+add)/10;
            p=p->next;
            tail=temp;
        }
    }
    if(q)
    {
        while (q)
        {
            temp=malloc(sizeof(struct ListNode));
            tail->next=temp;
            temp->val=(q->val+add)%10;
            add=(q->val+add)/10;
            q=q->next;
            tail=temp; 
        }
    }
    if(add>0)
    {
        temp=malloc(sizeof(struct ListNode));
        tail->next=temp;
        temp->val=add;
        tail=temp;
    }
    tail->next=NULL;
    return head;
}
// @lc code=end

