/*
 * @lc app=leetcode.cn id=455 lang=c
 *
 * [455] 分发饼干
 */

// @lc code=start
int cmp(int* a,int* b)
{
    return *a-*b;
}

int findContentChildren(int* g, int gSize, int* s, int sSize){
    qsort(g,gSize,sizeof(int),cmp);
    qsort(s,sSize,sizeof(int),cmp);
    int count=0;
    for (int i=0,j=0;i<gSize&&j<sSize;i++,j++)
    {
        while (j<sSize&&g[i]>s[j])
        {
            j++;
        }
        if(j<sSize)
            count++;
    }
    return count;
}
// @lc code=end



