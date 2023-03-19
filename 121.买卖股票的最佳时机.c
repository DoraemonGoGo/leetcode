/*
 * @lc app=leetcode.cn id=121 lang=c
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start


int maxProfit(int* prices, int pricesSize){
    int minprice=prices[0];
    int max=0;
    for(int i=0;i<pricesSize;i++)
    {
        if(prices[i]<minprice)
            minprice=prices[i];
        if(prices[i]-minprice>max)
            max=prices[i]-minprice;
    }
    return max;
}
// @lc code=end

