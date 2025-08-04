class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left=0;
        int n=fruits.size();
        int maxFruits=0;
        unordered_map<int,int>fruitCount;
        for(int right=0;right<n;right++){
            fruitCount[fruits[right]]++;
            while(fruitCount.size()>2){
                fruitCount[fruits[left]]--;
                if(fruitCount[fruits[left]]==0){
                    fruitCount.erase(fruits[left]);
                }
                left++;
            }
            maxFruits=max(maxFruits,right-left+1);
        }
        return maxFruits;
       
    }
};