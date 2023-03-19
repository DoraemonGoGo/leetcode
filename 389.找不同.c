/*
 * @lc app=leetcode.cn id=389 lang=c
 *
 * [389] 找不同
 */

// @lc code=start


char findTheDifference(char * s, char * t){
    int harsh[26]={0};
    for(int i=0;i<strlen(t);i++)
        harsh[t[i]-'a']++;
    for(int i=0;i<strlen(s);i++)
        harsh[s[i]-'a']--;
    char n;
    for(int i=0;i<strlen(t);i++)
        if(harsh[t[i]-'a']==1)
            n=t[i];
    return n;
}
// @lc code=end

