/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start


int removeElement(int* nums, int numsSize, int val){
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==val)
        {
            int k=0;
            int j=i;
            while (j<numsSize&&nums[j]==val)
            {
                k++;
                j++;
            }     
            if(i+k==numsSize)
                numsSize-=k;
            else
            {
                for(int t=i+k;t<numsSize;t++)
                    nums[t-k]=nums[t];
                numsSize-=k;
            }   
        }
    }
    return numsSize;
}
// @lc code=end

