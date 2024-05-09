/*
 * @lc app=leetcode.cn id=1329 lang=cpp
 *
 * [1329] 将矩阵按对角线排序
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> res(n + m);
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < m; k++) {
                res[j - k + m - 1].push_back(mat[j][k]);
            }
        }
        for(int i = 0; i < n + m - 1; i++) {
            sort(res[i].begin(), res[i].end());
        }
        for(int j = n - 1; j >= 0; j--) {
            for(int k = m - 1; k >= 0; k--) {
                mat[j][k] = res[j - k + m - 1].back();
                res[j - k + m - 1].pop_back();
            }
        }
        return mat;
    }
};
// @lc code=end

