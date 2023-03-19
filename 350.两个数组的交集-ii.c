/*
 * @lc app=leetcode.cn id=350 lang=c
 *
 * [350] 两个数组的交集 II
 */

// @lc code=start

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int *intersect(int *nums1, int nums1Size,
               int *nums2, int nums2Size, int *returnSize)
{
    qsort(nums1, nums1Size, sizeof(int), cmp);
    qsort(nums2, nums2Size, sizeof(int), cmp);
    int flag[1005] = {0};
    int *res = malloc(sizeof(int) * (nums1Size + nums2Size));
    *returnSize = 0;
    for (int i = 0; i < nums1Size; i++)
    {
        for (int j = 0; j < nums2Size; j++)
        {
            if (nums1[i] == nums2[j] && flag[j] == 0)
            {
                res[(*returnSize)++] = nums1[i];
                flag[j]=1;
                break;
            }
        }
    }
    return res;
}
// @lc code=end
