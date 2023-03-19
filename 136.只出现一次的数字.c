/*
 * @lc app=leetcode.cn id=136 lang=c
 *
 * [136] 只出现一次的数字
 */

// @lc code=start


int singleNumber(int* nums, int numsSize){
    if(numsSize==1)
        return nums[0];
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]>nums[j])
            {
                int t=nums[i];
                nums[i]=nums[j];
                nums[j]=t;
            }
        }
    }
    int i=0;
    while(i<numsSize-1)
    {
        if(nums[i]!=nums[i+1])
            return nums[i];
        else
            i+=2;
    }
    if(i==numsSize-1)
        return nums[numsSize-1];
    return 0;
}
// @lc code=end

