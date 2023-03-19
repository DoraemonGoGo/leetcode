/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start
bool isPalindrome(int x){
    if(x<0)
        return false;
    long s=0;
    int m=x;
    int n;
    while(m)
    {
        n=m%10;
        m/=10;
        s=s*10+n;
    }
    if(s==x)
        return true;
    else
        return false;
}
// @lc code=end

