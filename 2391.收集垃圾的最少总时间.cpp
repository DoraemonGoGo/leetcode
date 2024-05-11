/*
 * @lc app=leetcode.cn id=2391 lang=cpp
 *
 * [2391] 收集垃圾的最少总时间
 */

// @lc code=start
class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        unordered_map<char, int> distance;
        int res = 0 ,cur_dis = 0;
        for (int i = 0; i < garbage.size(); ++i) {
            res += garbage[i].size();
            if(i > 0) {
                cur_dis += travel[i - 1];
            }
            for (char c : garbage[i]) {
                distance[c] = cur_dis;
            }
        }
        for(auto [c, d] : distance) {
            res += d;
        }
    return res;
    }
};
// @lc code=end

