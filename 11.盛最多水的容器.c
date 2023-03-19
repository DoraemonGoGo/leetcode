/*
 * @lc app=leetcode.cn id=11 lang=c
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
int maxArea(int* height, int heightSize){
    int S=0;
    int i=0,j=heightSize-1;
    while (i<j)
    {
        if((height[i]>height[j]?height[j]:height[i])*(j-i)>S)
            S=(height[i]>height[j]?height[j]:height[i])*(j-i);
        if(height[i]<height[j])
            i++;
        else
            j--;
    }
    return S;
}
// @lc code=end

