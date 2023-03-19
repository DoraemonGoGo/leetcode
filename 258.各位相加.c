/*
 * @lc app=leetcode.cn id=258 lang=c
 *
 * [258] 各位相加
 */

// @lc code=start


int addDigits(int num){
    if(num<10)
        return num;
    int sum=0;
    while (num>=10)
    {
        while (num)
        {
            sum+=num%10;
            num/=10;
        }
        if(sum>=10)
        {
            num=sum;
            sum=0;
        }  
    }
    return sum;
}
// @lc code=end

