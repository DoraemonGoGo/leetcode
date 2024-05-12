/*
 * @lc app=leetcode.cn id=1017 lang=cpp
 *
 * [1017] 负二进制转换
 */

// @lc code=start
class Solution {
public:
    string baseNeg2(int n) {
        string res;
        int t, s;
        if(n == 0) {
            res += to_string(0);
            return res;
        }
        while(n != 1) {
            s = n / (-2);
            t = n % (-2);
            if(t < 0) {
                s++;
                t = n - s * (-2);
            }
            n = s;
            res += to_string(t); 
        }
        res += '1';
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end

