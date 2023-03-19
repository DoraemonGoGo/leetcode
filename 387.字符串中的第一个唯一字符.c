/*
 * @lc app=leetcode.cn id=387 lang=c
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start


int firstUniqChar(char * s){
    int len=strlen(s);
    int harsh[26]={0};
    for(int i=0;i<len;i++)
        harsh[s[i]-'a']++;
    for(int i=0;i<len;i++)
        if(harsh[s[i]-'a']==1)
            return i;
    return -1;
}
// @lc code=end

