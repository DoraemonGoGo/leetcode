/*
 * @lc app=leetcode.cn id=228 lang=c
 *
 * [228] 汇总区间
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** summaryRanges(int* nums, int numsSize, int* returnSize){
    char** res=malloc(sizeof(char*)*numsSize);
    *returnSize=0;
    int i=0;
    while (i<numsSize)
    {
        int low=i;
        i++;
        while (i<numsSize&&nums[i]==nums[i-1]+1)
            i++;
        int high=i-1;
        char* temp=malloc(sizeof(char)*25);
        sprintf(temp,"%d",nums[low]);
        if(low<high)
        {
            sprintf(temp+strlen(temp),"->");
            sprintf(temp+strlen(temp),"%d",nums[high]);
        }
        res[(*returnSize)++]=temp;
    }
    return res;
}
// @lc code=end

