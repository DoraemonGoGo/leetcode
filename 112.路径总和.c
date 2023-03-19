/*
 * @lc app=leetcode.cn id=112 lang=c
 *
 * [112] 路径总和
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


bool pathSum(struct TreeNode* root,int sum,int target)
{
    if(!root)
        return false;
    if((!root->left)&&(!root->right))
    {
        if(root->val+sum==target)
            return true;
        else
            return false;
    }
    return pathSum(root->left,sum+root->val,target)||pathSum(root->right,sum+root->val,target);
}

bool hasPathSum(struct TreeNode* root, int targetSum){
    int sum1=0;
    return pathSum(root,sum1,targetSum);
}
// @lc code=end

