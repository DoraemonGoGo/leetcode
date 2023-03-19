/*
 * @lc app=leetcode.cn id=205 lang=c
 *
 * [205] 同构字符串
 */

// @lc code=start


bool isIsomorphic(char * s, char * t){
    int l1=strlen(s);
    int l2=strlen(t);
    if(l1!=l2)
        return false;
    int harsh1[130]={0};
    int harsh2[130]={0};
    for(int i=0;i<l1;i++)
    {
        char ch1=s[i];
        char ch2=t[i];
        int m=ch1;
        int n=ch2;
        if(harsh1[m]==0)
        {
            if(harsh2[n]!=0)
                return false;
            else
            {
                harsh1[m]=n;
                harsh2[n]++;
            }  
        }
        else
        {
            if(harsh1[m]!=n)
                return false;
        }
    }
    return true;
}
// @lc code=end

