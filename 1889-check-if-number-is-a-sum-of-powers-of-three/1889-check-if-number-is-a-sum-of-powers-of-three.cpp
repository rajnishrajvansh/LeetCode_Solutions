class Solution {
public:
    bool checkPowersOfThree(int num) {
        int res=0;
        while(num>0){
            res=num%3;
            if(res==2){
                return false;
            }
            num/=3;
        }
       
      return true;  
    }
};