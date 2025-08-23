class Solution {
public:
    int minimumSum(vector<vector<int>>& A) {
        int res = INT_MAX;
        for (int rot = 0; rot < 4; rot++) {
            res = min(res, solve(A));
            A = rotate(A);
        }
        return res;
    }

private:
    int solve(vector<vector<int>>& A) {
        int n = A.size(), m = A[0].size();
        int res = INT_MAX;

        // try horizontal first cut
        for (int i = 1; i < n; i++) {
            int a1 = minimumArea(A, 0, 0, i, m);  // top part
            if (a1 == 0) continue;

            // vertical split in bottom part
            for (int j = 1; j < m; j++) {
                int a2 = minimumArea(A, i, 0, n, j);
                int a3 = minimumArea(A, i, j, n, m);
                if (a2 && a3) res = min(res, a1 + a2 + a3);
            }
            // horizontal split in bottom part
            for (int i2 = i+1; i2 < n; i2++) {
                int a2 = minimumArea(A, i, 0, i2, m);
                int a3 = minimumArea(A, i2, 0, n, m);
                if (a2 && a3) res = min(res, a1 + a2 + a3);
            }
        }
        return res;
    }

    // minimum bounding rectangle area of 1’s inside [r1,r2) × [c1,c2)
    int minimumArea(vector<vector<int>>& A, int r1, int c1, int r2, int c2) {
        int top = INT_MAX, left = INT_MAX, bottom = -1, right = -1;
        for (int i = r1; i < r2; i++) {
            for (int j = c1; j < c2; j++) {
                if (A[i][j] == 1) {
                    top = min(top, i);
                    bottom = max(bottom, i);
                    left = min(left, j);
                    right = max(right, j);
                }
            }
        }
        if (bottom == -1) return 0; // no 1’s
        return (bottom - top + 1) * (right - left + 1);
    }

    vector<vector<int>> rotate(vector<vector<int>>& A) {
        int n = A.size(), m = A[0].size();
        vector<vector<int>> rotated(m, vector<int>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                rotated[j][n - 1 - i] = A[i][j];
        return rotated;
    }
};
