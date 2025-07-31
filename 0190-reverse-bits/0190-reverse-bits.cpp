class Solution {
public:
bool isset(int k,unsigned int A){
    return (A&(1<<k))!=0;
}
    int reverseBits(int n) {
      unsigned  int ans=0;
      for(int i=0;i<32;i++)
        if(isset(i,n)){
            ans|=1<<(31-i);
        }
        return ans;
    }
};