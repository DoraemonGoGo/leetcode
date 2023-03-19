/*
 * @lc app=leetcode.cn id=20 lang=c
 *
 * [20] 有效的括号
 */

// @lc code=start


bool isValid(char * s){
    typedef struct 
    {
        char data[10005];
        int top;
    }stack;
    stack *p=(stack*)malloc(sizeof(stack));
    p->top=0;
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]=='('||s[i]=='['||s[i]=='{')
            p->data[p->top++]=s[i];
        else
        {
            if(p->top==0)
                return false;
            char a=p->data[--p->top];
            if((s[i]==')'&&a=='(')||(s[i]==']'&&a=='[')||(s[i]=='}'&&a=='{'))
                continue;
            else
                return false;
        }
    }
    if(p->top==0)
        return true;
    else
        return false;
}
// @lc code=end

