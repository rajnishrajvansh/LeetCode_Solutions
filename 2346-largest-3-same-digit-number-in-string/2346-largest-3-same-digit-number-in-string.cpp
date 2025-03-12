class Solution {
public:
    string largestGoodInteger(string num) {
        int pos;
        int max=-1;
       for(int i=2;i<num.length();i++){
            if((num[i-2]==num[i-1])&&(num[i-1]==num[i])){
               string str= num.substr(i-2,3);
               if((num[i]-'0')>max){
                max=num[i]-'0';
                pos=i;
               }
            }
       } 
       if(max>=0){
        return num.substr(pos-2,3);
       }
       return "";
    }
};