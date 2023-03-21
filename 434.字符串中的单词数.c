/*
 * @lc app=leetcode.cn id=434 lang=c
 *
 * [434] 字符串中的单词数
 */

// @lc code=start

int countSegments(char *s)
{
    if (strlen(s) == 0)
        return 0;
    int k = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i] != ' ') && ((s[i + 1] == ' ') || (s[i + 1] == '\0')))
            k++;
    }
    return k;
}
// @lc code=end
