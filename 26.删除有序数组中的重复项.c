/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start


int removeDuplicates(int* nums, int numsSize){
     for(int i=0;i<numsSize-1;i++)
     {
         int j=i+1;
         int k=0;
         while (j<numsSize&&nums[i]==nums[j])
         {
            k++;
            j++;
         }
        for(int t=i+k;t<numsSize;t++)
            nums[t-k]=nums[t];
        numsSize-=k;
     }
     return numsSize;
}
// @lc code=end

