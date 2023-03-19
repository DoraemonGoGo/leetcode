/*
 * @lc app=leetcode.cn id=58 lang=c
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
int lengthOfLastWord(char * s){
    int len=strlen(s);
    int j=len-1;
    int k=0;
    while(s[j]==' ')
        j--;
    while (j>=0&&s[j]!=' ')
    {
        k++;
        j--;
    }
    return k;        
}
// @lc code=end

