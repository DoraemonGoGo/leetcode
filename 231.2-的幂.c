/*
 * @lc app=leetcode.cn id=231 lang=c
 *
 * [231] 2 的幂
 */

// @lc code=start


bool isPowerOfTwo(int n){
    if(n==1)
        return true;
    else if(n==0)
        return false;
    else if(n%2==0)
        return isPowerOfTwo(n/2);
    else
        return false;
}
// @lc code=end

