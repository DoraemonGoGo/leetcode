/*
 * @lc app=leetcode.cn id=69 lang=c
 *
 * [69] x 的平方根 
 */

// @lc code=start


int mySqrt(int x){
    if(x==0)
        return 0;
    int l=1,r=x,ans=-1;
    while (l<=r)
    {
        long mid=(r-l)/2+l;
        if((long long)mid*mid>x)
            r=mid-1;
        else
        {
            l=mid+1;
            ans=mid;
        }     
    }
    return ans;
}
// @lc code=end

