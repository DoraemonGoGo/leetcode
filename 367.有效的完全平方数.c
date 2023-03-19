/*
 * @lc app=leetcode.cn id=367 lang=c
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
double mySqrt(int x)
{
    double x0 = x;
    while (true)
    {
        double x1 = (x0 + x/x0) / 2;
        if (abs(x0 - x1) < 1e-3)
            break;
        x0 = x1;
    }
    return x0;
}
bool isPerfectSquare(int num)
{
    double t = mySqrt(num);
    int s = (int)t;
    if (s * s == num)
        return true;
    else
        return false;
}
// @lc code=end
