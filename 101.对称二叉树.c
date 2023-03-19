/*
 * @lc app=leetcode.cn id=101 lang=c
 *
 * [101] 对称二叉树
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

bool isSymmetric2(struct TreeNode* p, struct TreeNode* q){
    if((p==NULL&&q)||(p&&q==NULL))
        return false;
    else if(!p&&!q)
        return true;
    else if(p->val!=q->val)
        return false;
    else
        return isSymmetric2(p->left,q->right)&&isSymmetric2(p->right,q->left); 
}

bool isSymmetric(struct TreeNode* root){
    if(!root)
        return true;
    else
        return isSymmetric2(root->left,root->right); 
}
// @lc code=end

