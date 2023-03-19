/*
 * @lc app=leetcode.cn id=219 lang=c
 *
 * [219] 存在重复元素 II
 */

// @lc code=start
bool containsNearbyDuplicate(int* nums, int numsSize, int k){
    if(numsSize==1||k==0)
        return false;
    for(int s=0;s<numsSize;s++)
    {
        int j;
        if(s+k<numsSize)
            j=s+k;
        else
            j=numsSize-1;
        for(int t=j;t>s;t--)
            if(nums[s]==nums[t])
                return true;
    }
    return false;
}
// @lc code=end

