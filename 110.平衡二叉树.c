/*
 * @lc app=leetcode.cn id=110 lang=c
 *
 * [110] 平衡二叉树
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

int treeHigh(struct TreeNode* root)
{
    if(!root)
        return 0;
    int l=treeHigh(root->left);
    int r=treeHigh(root->right);
    if(l==-1||r==-1||abs(l-r)>1)
        return -1;
    return l>r?l+1:r+1;
}

bool isBalanced(struct TreeNode* root){
    if(treeHigh(root)>=0)
        return true;
    else
        return false;
}
// @lc code=end

