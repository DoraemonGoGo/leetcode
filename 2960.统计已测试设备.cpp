/*
 * @lc app=leetcode.cn id=2960 lang=cpp
 *
 * [2960] 统计已测试设备
 */

// @lc code=start
class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int res = 0;
        for(int battery : batteryPercentages) {
            if(battery > res) {
                res++;
            }
        }
        return res;
    }
};
// @lc code=end

