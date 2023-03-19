/*
 * @lc app=leetcode.cn id=242 lang=c
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
bool isAnagram(char * s, char * t){
    int len1=strlen(s);
    int len2=strlen(t);
    if(len1!=len2)
        return false;
    int harsh[26]={0};
    for(int i=0;i<len1;i++)
        harsh[s[i]-'a']++;
    for(int j=0;j<len2;j++)
    {
        harsh[t[j]-'a']--;
        if(harsh[t[j]-'a']<0)
            return false;
    }
    return true;
}
// @lc code=end

