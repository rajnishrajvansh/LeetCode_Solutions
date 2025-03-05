class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        if(x==0) return 0;
        int y=x;
        int sum=0;
        while(y>0){
            sum+=y%10;
            y/=10;
        }
        if(x%sum==0){
            return sum;
        }
        return -1;
    }
};