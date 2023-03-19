/*
 * @lc app=leetcode.cn id=409 lang=c
 *
 * [409] 最长回文串
 */

// @lc code=start
int cmp(const void* a,const void* b)
{
    return *(int*)b-*(int*)a;
}
int longestPalindrome(char * s){
    int harsh[58]={0};
    int len=strlen(s);
    for(int i=0;i<len;i++)
        harsh[s[i]-'A']++;
    qsort(harsh,58,sizeof(int),cmp);
    int sum=0,flag=0,i=0;
    while(harsh[i]!=0)
    {
        if(harsh[i]%2==1&&flag==0)
        {
            sum+=harsh[i];
            flag=1;
        }
        else if(harsh[i]%2==1&&flag==1)
            sum+=(harsh[i]-1);
        else if(harsh[i]%2==0)   
            sum+=harsh[i];
        i++;
    }
    return sum;
}
// @lc code=end

