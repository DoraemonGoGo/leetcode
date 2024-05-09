/*
 * @lc app=leetcode.cn id=2079 lang=cpp
 *
 * [2079] 给植物浇水
 */

// @lc code=start
class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int len = plants.size();
        int step = 0;
        int s = capacity;
        for(int  i = 0; i < len - 1; i++) {
            s -= plants[i];
            step += 1;
            if(s < plants[i + 1]) {
                s = capacity;
                step += (i + 1) * 2;
            }
        }
        return step + 1;
    }
};
// @lc code=end

