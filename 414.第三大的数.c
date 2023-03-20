/*
 * @lc app=leetcode.cn id=414 lang=c
 *
 * [414] 第三大的数
 */

// @lc code=start
int cmp(const void* a,const void* b)
{
    return *(int*)b>*(int*)a;
}
int thirdMax(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(nums[0]), cmp);
    int flag=1;
    for (int i = 1; i < numsSize; i++)
    {
        if(nums[i]!=nums[i-1])
            flag++;
        if(flag==3)
            return nums[i];
    }
    return nums[0];
}
// @lc code=end

