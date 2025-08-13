class Solution {
public:
    bool isPowerOfThree(int n) {
      long long temp=1;
      while(n>0&&temp<n){
        temp+=temp<<1;
      } 
      return temp==n;
    }
};