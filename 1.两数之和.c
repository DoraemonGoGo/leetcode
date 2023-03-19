/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    (*returnSize)=2;
    int i,j;
    int *returned=malloc(sizeof(int)*2);
    for(i=0;i<numsSize-1;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                returned[0]=i;
                returned[1]=j;
                return returned;
            }
        }  
    }
    return -1; 
    return 0;
}
// @lc code=end

