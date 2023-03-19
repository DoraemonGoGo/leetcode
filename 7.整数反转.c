/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */

// @lc code=start


int reverse(int x){
    int res=0;
    while(x)
    {
        if (res < INT_MIN / 10 || res > INT_MAX / 10)
            return 0;
        int t=x%10;
        x/=10;
        res=res*10+t;
    }
    return res;
}
// @lc code=end

