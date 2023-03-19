/*
 * @lc app=leetcode.cn id=234 lang=c
 *
 * [234] 回文链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head){
    int num[100005];
    int numSize=0;
    while (head)
    {
        num[numSize++]=head->val;
        head=head->next;
    }
    int i=0,j=numSize-1;
    while (i<j)
    {
        if(num[i]!=num[j])
            return false;
        i++;
        j--;
    }
    return true;
}
// @lc code=end

