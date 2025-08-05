class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) { 
        int j=0,n=fruits.size();
         vector<int> placed(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            if((fruits[i]<=baskets[j])&&(placed[j]!=1)){
                placed[j]=1;
                break;
            }
        }
        }
       int res= count(placed.begin(),placed.end(),0);
       return res;
    }
};