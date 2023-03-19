/*
 * @lc app=leetcode.cn id=70 lang=c
 *
 * [70] 爬楼梯
 */

// @lc code=start


int climbStairs(int n){
    int i,j;
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    else
    {
        int i=1,j=2;
        int res;
        for(int k=3;k<=n;k++)
        {
            res=i+j;
            i=j;
            j=res;
        }
        return res;
    }
}
// @lc code=end

