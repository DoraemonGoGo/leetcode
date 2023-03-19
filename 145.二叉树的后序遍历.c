/*
 * @lc app=leetcode.cn id=145 lang=c
 *
 * [145] 二叉树的后序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* postorderTraversal(struct TreeNode* root, int* returnSize){
    struct TreeNode* stack[105];
    struct TreeNode* p=root;
    struct TreeNode* r=NULL;
    int top=-1;
    int* res=malloc(sizeof(int)*105);
    *returnSize=0;
    while (p||top!=-1)
    {
        if(p)
        {
            stack[++top]=p;
            p=p->left;
        }
        else
        {
            p=stack[top];
            if((p->right)&&(p->right)!=r)
                p=p->right;
            else
            {
                top--;
                res[(*returnSize)++]=p->val;
                r=p;
                p=NULL;
            }
        }
    }
    return res;
}
// @lc code=end

