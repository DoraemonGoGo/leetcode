/*
 * @lc app=leetcode.cn id=3 lang=c
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
int lengthOfLongestSubstring(char * s){
    if(!strlen(s))
        return 0;
    int left=0,right=0;
    int max=0;
    int flag,i,j;
    for(i=0;i<strlen(s);i++)
    {
        if(left<=right)
        {
            flag=0;
            for(j=left;j<right;j++)
            {
                if(s[right]==s[j])
                {
                    flag=1;
                    break;
                }
                
            }
            if(flag)
                left=j+1;
        }
        max=max>(right-left+1)?max:(right-left+1);
        right++;
    }
    return max;
    //return 0;
}
// @lc code=end

