class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp;
        map<char,char> pm;
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++)
        {
            char c1=s[i];
            char c2=t[i];
            if(mp.count(c1)){   
                if(mp[c1]!=c2)
                return false;
            } 
            else{
                 mp[c1]=c2;
            }
             if(pm.count(c2)){   
                if(pm[c2]!=c1)
                return false;
            } 
            else{
                 pm[c2]=c1;
            }
           
        }
        return true;
    }
};