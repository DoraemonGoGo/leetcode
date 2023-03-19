/*
 * @lc app=leetcode.cn id=108 lang=c
 *
 * [108] 将有序数组转换为二叉搜索树
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

struct TreeNode* creatTree(int* Arr,int l,int r)
{
    struct TreeNode* root=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    if(l>r)
        return NULL;
    int mid=(l+r)/2; 
    root->val=Arr[mid];
    root->left=creatTree(Arr,l,mid-1);
    root->right=creatTree(Arr,mid+1,r);
    return root;
}
struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    return creatTree(nums,0,numsSize-1);
}
// @lc code=end

