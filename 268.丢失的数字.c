/*
 * @lc app=leetcode.cn id=268 lang=c
 *
 * [268] 丢失的数字
 */

// @lc code=start
int cmp(const void* a,const void* b)
{
    return *(int*)a-*(int*)b;
}

int missingNumber(int* nums, int numsSize){
    qsort(nums,numsSize,sizeof(int),cmp);
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=i)
            return i;
    }
    return numsSize;
}
// @lc code=end

