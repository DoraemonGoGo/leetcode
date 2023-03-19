/*
 * @lc app=leetcode.cn id=202 lang=c
 *
 * [202] 快乐数
 */

// @lc code=start
int getSum(int n)
{
    int sum=0;
    int s;
    while (n>0)
    {
        s=n%10;
        n/=10;
        sum+=s*s;
    }
    return sum;
}

bool isHappy(int n){
    int sum=getSum(n);
    int harsh[805]={0};
    while (sum!=1)
    {
        if(harsh[sum]==1)
            return false;
        else
            harsh[sum]++;
        sum=getSum(sum);
    }
    return true;
}
// @lc code=end

