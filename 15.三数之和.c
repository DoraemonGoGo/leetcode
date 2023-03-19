/*
 * @lc app=leetcode.cn id=15 lang=c
 *
 * [15] 三数之和
 */

// @lc code=start
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    int base=100;
    int **res=(int**)malloc(sizeof(int*)*base);
    *returnColumnSizes=(int*)malloc(sizeof(int)*base);
    *returnSize=0;
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
    int i,j,k;
    for(i=0;i<numsSize;i++)
    {
        if(i>0&&nums[i]==nums[i-1])
            continue;
        j=i+1;
        k=numsSize-1;
        while (j<k)
        {
            if(nums[i]+nums[j]+nums[k]==0)
            {
                res[*returnSize]=(int*)malloc(sizeof(int)*3);
                (*returnColumnSizes)[*returnSize]=3;
                res[*returnSize][0]=nums[i];
                res[*returnSize][1]=nums[j];
                res[*returnSize][2]=nums[k];
                (*returnSize)++;
                if(*returnSize==base){
                    base+=10;
                    res=(int**)realloc(res,sizeof(int*)*base);
                    *returnColumnSizes=(int*)realloc(*returnColumnSizes,sizeof(int)*base);
                }
                int num1=nums[j],num2=nums[k];
                while (nums[j]==num1&&j<k)
                    j++;
                while(nums[k]==num2&&j<k)
                    k--;
            }
            else if(nums[i]+nums[j]+nums[k]<0)
                j++;
            else
                k--;
        }
    }
    return res;
}
// @lc code=end

