/*
 * @lc app=leetcode.cn id=66 lang=c
 *
 * [66] 加一
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int add=1;
    for(int i=digitsSize-1;i>=0;i--)
    {
        int t=digits[i];
        digits[i]=(digits[i]+add)%10;
        add=(t+add)/10;
    }
    if(add==1)
    {
        int* res = malloc(sizeof(int) * (digitsSize + 1));
        res[0]=1;
        for(int i=1;i<=digitsSize;i++)
            res[i]=0;
        *returnSize=digitsSize+1;
        return res;
    }
    else
    {
        *returnSize=digitsSize;
        return digits;
    }
    /*if(digits[digitsSize-1]!=9)
    {
        digits[digitsSize-1]+=1;
        *returnSize=digitsSize;
        return digits;
    }
    else
    {
        int* res = malloc(sizeof(int) * (digitsSize + 1));
        res[]
    }*/ 
}
// @lc code=end

