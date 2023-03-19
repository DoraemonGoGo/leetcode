/*
 * @lc app=leetcode.cn id=392 lang=c
 *
 * [392] 判断子序列
 */

// @lc code=start


bool isSubsequence(char * s, char * t){
    int len1=strlen(s);
    int len2=strlen(t);
    if(len1==len2)
        return !strcmp(s,t);
    int* harsh=malloc(sizeof(int)*len1);
    int flag,k=0,j=-1;
    for(int i=0;i<len1;i++)
    {
        flag=0;
        while (j<len2)
        {
            j++;
            if(s[i]==t[j])
            {
                harsh[k++]=j;
                flag=1;
                break;
            } 
        }
        if(flag==0)
            return false;
    }
    for(int i=0;i<k-1;i++)
        if(harsh[i]>harsh[i+1])
            return false;
    return true;
}
// @lc code=end

