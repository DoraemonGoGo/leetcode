/*
 * @lc app=leetcode.cn id=168 lang=c
 *
 * [168] Excel表列名称
 */

// @lc code=start

void reverse(char* s,int len)
{
    int l=0,r=len-1;
    while (l<r)
    {
        char tmp=s[l];
        s[l]=s[r];
        s[r]=tmp;
        l++;
        r--;
    }
}
char * convertToTitle(int columnNumber){
    char* res=malloc(sizeof(char)*8);
    int resSize=0;
    while (columnNumber>0)
    {
        int t=(columnNumber-1)%26+1;
        res[resSize++]=t-1+'A';
        columnNumber=(columnNumber-t)/26;
    }
    res[resSize]="\0";
    reverse(res,resSize);
    return res;
}
// @lc code=end

