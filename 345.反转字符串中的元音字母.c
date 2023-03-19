/*
 * @lc app=leetcode.cn id=345 lang=c
 *
 * [345] 反转字符串中的元音字母
 */

// @lc code=start
bool isYuan(char t)
{
    if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u'||t=='A'
    ||t=='E'||t=='I'||t=='O'||t=='U')
        return true;
    else
        return false;
}

char * reverseVowels(char * s){
    int len=strlen(s);
    int i=0,j=len-1;
    while (i<j)
    {
        while((i<j)&&(!isYuan(s[i])))
            i++;
        while((i<j)&&(!isYuan(s[j])))
            j--;
        char t=s[i];
        s[i]=s[j];
        s[j]=t;
        i++;
        j--;
    }
    return s;
}
// @lc code=end

