class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
       bool hasOdd=false;
        int ans=0;
        for(auto i:s){
            mp[i]++;
        }
        for(auto it:mp){
            if(it.second%2==0){
                ans+=it.second;
            }
           else{
               ans+=it.second-1;
               hasOdd=true;
                }
            }
        if(hasOdd) 
        ans+=1;
        return ans;
    }
};