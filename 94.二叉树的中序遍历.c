/*
 * @lc app=leetcode.cn id=94 lang=c
 *
 * [94] 二叉树的中序遍历
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

int inorder(struct TreeNode* root,int* res,int *resSize)
{
    if(root==NULL)
        return;
    inorder(root->left,res,resSize);
    res[(*resSize)++]=root->val;
    inorder(root->right,res,resSize);
}
int* inorderTraversal(struct TreeNode* root, int* returnSize){
    int* s=malloc(sizeof(int)*501);
    *returnSize=0;
    inorder(root,s,returnSize);
    return s;
}
// @lc code=end

