/*
 * @lc app=leetcode.cn id=6 lang=c
 *
 * [6] Z 字形变换
 */

// @lc code=start


char * convert(char * s, int numRows){
    int len=strlen(s);
    int r=numRows;
    if(r==1||len<=r)
        return s;
    int t=2*r-2;
    int l=((len+t-1)/t)*(r-1);
    
    char **res=(char**)malloc(sizeof(char*)*r); 
    for(int i=0;i<r;i++)
    {
        res[i]=(char*)malloc(sizeof(char)*l);
        memset(res[i],0,sizeof(char)*l);
    }
    for(int i=0,x=0,y=0;i<len;i++)
    {
        res[x][y]=s[i];
        if(i%t<r-1)
            x++;
        else
        {
            x--;
            y++;
        }
    }
    int loc=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(res[i][j])
                s[loc++]=res[i][j];
        }
        free(res[i]);
    }
    free(res);
    return s;
}
        
// @lc code=end

