/*
 * @lc app=leetcode.cn id=169 lang=c
 *
 * [169] 多数元素
 */

// @lc code=start

int majorityElement(int* nums, int numsSize){
    int t=nums[0],k=1;
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i]==t)
            k++;
        else
        {
            k--;
            if(k==0)
            {
                t=nums[i];
                k=1;
            }
        }
    }
    return t;
}
// @lc code=end

