/*
 * @lc app=leetcode.cn id=67 lang=c
 *
 * [67] 二进制求和
 */

// @lc code=start

void reserve(char* s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char t = s[i];
        s[i] = s[len - i - 1], s[len - i - 1] = t;
    }
}

char * addBinary(char * a, char * b){
    reserve(a);
    reserve(b);
    int l1=strlen(a);
    int l2=strlen(b);
    int n=fmax(l1,l2);
    char* res=malloc(sizeof(char)*(n+2));
    int add=0,k=0;
    for (int i = 0; i < n; ++i) {
        add += i < l1 ? (a[i] == '1') : 0;
        add += i < l2 ? (b[i] == '1') : 0;
        res[k++] = add % 2 + '0';
        add /= 2;
    }
    if(add==1)
        res[k++]='1';
    res[k]='\0';
    reserve(res);
    return res;
}
// @lc code=end

