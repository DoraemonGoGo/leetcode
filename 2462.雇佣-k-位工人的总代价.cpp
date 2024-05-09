/*
 * @lc app=leetcode.cn id=2462 lang=cpp
 *
 * [2462] 雇佣 K 位工人的总代价
 */

// @lc code=start
class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int n =costs.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        int left = candidates - 1;
        int right = n - candidates;

        if(left + 1 < right) { 
            for(int i = 0; i <= left; i++) {
                pq.emplace(costs[i], i);
            }
            for(int j = right; j < n; j++) {
                pq.emplace(costs[j], j);
            }
        }
        else {
            for(int i = 0; i < n; i++) {
                pq.emplace(costs[i], i);
            }
        }
        long long sumcost = 0;
        while (k > 0)
        {
            auto [cost, id] = pq.top();
            pq.pop();
            sumcost += cost;
            if(left + 1 < right) {
                if(id <= left) {
                    left++;
                    pq.emplace(costs[left], left);
                }
                else {
                    right--;
                    pq.emplace(costs[right], right);
                }
            }
            k--;
        }
        return sumcost;
    }
};
// @lc code=end

