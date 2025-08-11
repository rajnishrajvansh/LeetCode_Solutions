class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& que) {
        vector<int> powers;
        const int MOD = 1e9 + 7;
        vector<int> res;
        for (int i = 0; i < 31; i++) {
            if (n & (1 << i)) {
                powers.push_back(1 << i);
            }
        }
        for (auto& q : que) {
            long long prod = 1;
            for (int i = q[0]; i <= q[1]; i++) {
                prod = (prod *powers[i]) % MOD;
            }
            res.push_back((int)prod);
        }
        return res;
    }
};