/*
 * @lc app=leetcode.cn id=5 lang=c
 *
 * [5] 最长回文子串
 */

// @lc code=start
char * longestPalindrome(char * s){
    int left=0;
    int right=0;
    int len=strlen(s);
    int dp[1005][1005]={0};
    int maxlen=1;
    for(int i=0;i<len;i++)
    {
        dp[i][i]=1;
    }
    for(int j=1;j<len-1;j++)
    {
        for(int i=j-1;j>=0;i--)
        {
            if(s[i]==s[j])
            {
                if(j-i==1)
                {
                    dp[i][j]=1;
                    if((j-i+1>maxlen))
                    {
                        maxlen=j-i+1;
                        left=i;
                        right=j;
                    }
                }   
                else
                {
                    if(dp[i+1][j-1])
                    {
                        dp[i][j]=1;
                        if((j-i+1>maxlen))
                        {
                            maxlen=j-i+1;
                            left=i;
                            right=j;
                        } 
                    }
                         
                }
                    
            }
        }
    }
    char res[1005];
    for(int i=0;i<maxlen;i++)
        s[i+left]=res[i];
    res[maxlen]="\0";
    return res;
}
// @lc code=end

