class Solution {
public:
    string largestGoodInteger(string num) {
        vector<int> arr;
        int ret=-1;
        for(char i:num){
           arr.push_back(i-'0');
        }
        for(int n=0;n+2<arr.size();n++){
            if(arr[n]==arr[n+1]&&arr[n]==arr[n+2]){
               ret= max(ret,arr[n]);        
            }
        }
        if(ret==-1) return "";
        return string(3,'0'+ret);
    }
};