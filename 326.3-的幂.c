/*
 * @lc app=leetcode.cn id=326 lang=c
 *
 * [326] 3 的幂
 */

// @lc code=start


bool isPowerOfThree(int n){
    if(n==1)
        return true;
    else if(n==0)
        return false;
    else if(n%3==0)
        return isPowerOfThree(n/3);
    else
        return false;
}
// @lc code=end

