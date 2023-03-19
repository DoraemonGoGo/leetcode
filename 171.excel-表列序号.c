/*
 * @lc app=leetcode.cn id=171 lang=c
 *
 * [171] Excel 表列序号
 */

// @lc code=start


int titleToNumber(char * columnTitle){
    int len=strlen(columnTitle);
    long num=1;
    int sum=0;
    for(int i=len-1;i>=0;i--)
    {
        int t=columnTitle[i]-'A'+1;
        sum+=t*num;
        num*=26;
    }
    return sum;
}
// @lc code=end

