/*
 * @lc app=leetcode.cn id=349 lang=c
 *
 * [349] 两个数组的交集
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void* a,const void* b)
{
    return *(int*)a-*(int*)b;
}
int* intersection(int* nums1, int nums1Size, 
int* nums2, int nums2Size, int* returnSize){
    qsort(nums1,nums1Size,sizeof(int),cmp);
    qsort(nums2,nums2Size,sizeof(int),cmp);
    int* res=malloc(sizeof(int)*(nums1Size+nums2Size));
    *returnSize=0;
    for(int i=0;i<nums1Size;i++)
    {
        if(i>0&&nums1[i]==nums1[i-1])
            continue;
        else
        {
            for(int j=0;j<nums2Size;j++)
            {
                if(j>0&&nums2[j]==nums2[j-1])
                    continue;
                if(nums1[i]==nums2[j])
                    res[(*returnSize)++]=nums1[i];
            }
        }
    }
    return res;
}
// @lc code=end

