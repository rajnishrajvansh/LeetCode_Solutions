class Solution {
public:
    long long coloredCells(int n) {
        if(n==0) return 0;
        long long res=(long long)n*n;
        long long result=(2*res)-(2*n)+1;
        return result;
    }
};