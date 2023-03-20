/*
 * @lc app=leetcode.cn id=415 lang=c
 *
 * [415] 字符串相加
 */

// @lc code=start
char *addStrings(char *num1, char *num2)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    char *res = (char *)malloc(sizeof(char) * (fmax(len1, len2) + 2));
    int resSize = 0;
    int carry = 0;
    int i = len1 - 1, j = len2 - 1;
    while (i >= 0 || j >= 0 || carry != 0)
    {
        int x = i >= 0 ? num1[i] - '0' : 0;
        int y = j >= 0 ? num2[j] - '0' : 0;
        res[resSize++] = (x + y + carry) % 10 + '0';
        carry = (x + y + carry) / 10;
        i--;
        j--;
    }
    for (int i = 0; 2 * i < resSize; i++) {
        int t = res[i];
        res[i] = res[resSize - i - 1], res[resSize - i - 1] = t;
    }
    res[resSize++] = 0;
    return res;
}
// @lc code=end
