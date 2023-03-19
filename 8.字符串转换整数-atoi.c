/*
 * @lc app=leetcode.cn id=8 lang=c
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
int myAtoi(char * s){
    long res=0;
    int i=0;
    int len=strlen(s);
    int pos=1;
    int flag=0;
    if(s[0]!=' '&&!(s[0]>='0'&&s[0]<='9')&&s[i]!='-'&&s[i]!='+')
        return 0;
    while(s[i]==' ')
        i++;
    while(i<len)
    {
        if(s[i]>='a'&&s[i]<='z')
            break;
        if(s[i]=='-'&&s[i+1]>='0'&&s[i+1]<='9')
        {
            pos=-1;  
        }
        if(s[i]=='-'&&!(s[i+1]>='0'&&s[i+1]<='9')||s[i]=='+'&&!(s[i+1]>='0'&&s[i+1]<='9'))
            return 0;
        if(s[i]>='0'&&s[i]<='9')
        {
            flag=1;
            if (res > INT_MAX / 10||(s[i]-'0'>7&&res==INT_MAX / 10))
                return (pos>0?INT_MAX:INT_MIN);
            res=res*10+(s[i]-'0');  
        }
        if(!(s[i+1]>='0'&&s[i+1]<='9')&&flag==1)
            break;
        i++;
    }
    int t=pos*res;
    return t;
}
// @lc code=end

