class Solution {
public:
    long long flowerGame(int n, int m) {
       
        long long result=  1LL*(n/2)*((m+1)/2)+1LL*((n+1)/2)*(m/2);
        return result;
       
    }
};