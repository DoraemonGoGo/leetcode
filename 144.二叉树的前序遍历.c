/*
 * @lc app=leetcode.cn id=144 lang=c
 *
 * [144] 二叉树的前序遍历
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
int* preorderTraversal(struct TreeNode* root, int* returnSize){
    struct TreeNode* stack[105];
    int top=-1;
    int* res=malloc(sizeof(int)*105);
    *returnSize=0;
    struct TreeNode* p=root;
    while (p||top!=-1)
    {
        if(p)
        {
            res[(*returnSize)++]=p->val;
            stack[++top]=p;
            p=p->left;
        }
        else
        {
            p=stack[top--];
            p=p->right;
        }
    }
    return res;
}
// @lc code=end

