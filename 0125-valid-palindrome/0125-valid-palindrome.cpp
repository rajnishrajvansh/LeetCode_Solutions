class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            char c=s[i];
            if(isalnum(c)){
             str+=tolower(c);
        }  
        }
        cout<<str<<endl;
        int l=0;
        int r=str.length()-1;
        while(l<r){
            if(str[l]!=str[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};