/*
 * @lc app=leetcode.cn id=441 lang=c
 *
 * [441] 排列硬币
 */

// @lc code=start

long Sum(long x)
{
    long t = x * (x + 1);
    long sum = t / 2;
    return sum;
}
int arrangeCoins(int n)
{
    for (int i = 1; i <= 65536; i++)
    {
        if (n >= Sum(i - 1) && n < Sum(i))
            return i - 1;
    }
    return 0;
}
// @lc code=end
