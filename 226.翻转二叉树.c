/*
 * @lc app=leetcode.cn id=226 lang=c
 *
 * [226] 翻转二叉树
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


struct TreeNode* invertTree(struct TreeNode* root){
    if(!root)
        return NULL;
    struct TreeNode* tmp=root->left;
    root->left=root->right;
    root->right=tmp;
    invertTree(root->left);
    invertTree(root->right);
    return root;
}
// @lc code=end

