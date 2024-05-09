/*
 * @lc app=leetcode.cn id=2105 lang=cpp
 *
 * [2105] 给植物浇水 II
 */

// @lc code=start
class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int res = 0;
        int cA = capacityA, cB = capacityB;
        for(int i = 0, j = plants.size() - 1; i <= j; i++, j--) {
            if(i < j) {
                if(cA < plants[i]) {
                    cA = capacityA;
                    res++;
                }
                if(cB < plants[j]) {
                    cB = capacityB;
                    res++;
                }
                cA -= plants[i];
                cB -= plants[j];
            }
            else {
                if(cA < plants[i] && cB < plants[i]) {
                    res++;
                }
            }
        }
        return res;
    }
};
// @lc code=end

