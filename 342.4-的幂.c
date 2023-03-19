/*
 * @lc app=leetcode.cn id=342 lang=c
 *
 * [342] 4的幂
 */

// @lc code=start


bool isPowerOfFour(int n){
    if(n==1)
        return true;
    else if(n==0)
        return false;
    else if(n%4==0)
        return isPowerOfFour(n/4);
    else
        return false;
}
// @lc code=end

