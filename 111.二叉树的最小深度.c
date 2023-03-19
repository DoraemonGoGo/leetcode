/*
 * @lc app=leetcode.cn id=111 lang=c
 *
 * [111] 二叉树的最小深度
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

int minDepth(struct TreeNode* root){
    if(!root)
        return 0;
    if((!root->left)&&(!root->right))
        return 1;
    int min_depth=100005;
    if((root->left))
        min_depth=fmin(minDepth(root->left),min_depth);
    if(root->right)
        min_depth=fmin(minDepth(root->right),min_depth);
    return min_depth+1;
}
// @lc code=end

