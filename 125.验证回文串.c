/*
 * @lc app=leetcode.cn id=125 lang=c
 *
 * [125] 验证回文串
 */

// @lc code=start
bool isPalindrome(char * s){
    int len=strlen(s);
    int i=0,j=len-1;
    while (i<j)
    {
        if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
        &&((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9')))
        {
            if(((s[i]>='0'&&s[i]<='9')&&!(s[j]>='0'&&s[j]<='9'))
            ||((s[j]>='0'&&s[j]<='9')&&!(s[i]>='0'&&s[i]<='9')))
                return false;
            else
            {
                if(s[i]!=s[j]&&s[i]!=(s[j]-32)&&(s[i]-32)!=s[j])
                    return false;
                else
                {
                    i++;
                    j--;
                }
            } 
        }
        else
        {
            if(!(s[i]>='a'&&s[i]<='z')&&!(s[i]>='A'&&s[i]<='Z')&&!(s[i]>='0'&&s[i]<='9'))
                i++;
            if(!(s[j]>='a'&&s[j]<='z')&&!(s[j]>='A'&&s[j]<='Z')&&!(s[j]>='0'&&s[j]<='9'))
                j--;
        }
    }
    return true;
}
// @lc code=end

