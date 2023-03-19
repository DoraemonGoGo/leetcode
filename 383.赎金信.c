/*
 * @lc app=leetcode.cn id=383 lang=c
 *
 * [383] 赎金信
 */

// @lc code=start
char* reverse(char* s)
{
    int l=0,r=strlen(s)-1;
    while (l<r)
    {
        char t=s[l];
        s[l]=s[r];
        s[r]=t;
        l++;
        r--;
    }
    return s;
}
bool canConstruct(char * ransomNote, char * magazine){
    int len1=strlen(ransomNote);
    int len2=strlen(magazine);
    if(len2<len1)
        return false;
    int harsh[26]={0};
    for(int i=0;i<len2;i++)
        harsh[magazine[i]-'a']++;
    for(int i=0;i<len1;i++)
    {
        harsh[ransomNote[i]-'a']--;
        if(harsh[ransomNote[i]-'a']<0)
            return false;
    }
    return true;
}
// @lc code=end

