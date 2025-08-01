class Solution {
public:
    int countHillValley(vector<int>& vec) {
        if(vec.size()<3) return 0;
         int ans=0;
        vector<int>nums;
        nums.push_back(vec[0]);
        for(int i=1;i<vec.size();i++){
            if(vec[i]!=vec[i-1]){
                nums.push_back(vec[i]);
            }
        }

        for(int i=1;i<nums.size()-1;i++){
            if((nums[i]<nums[i-1]&&nums[i]<nums[i+1])||(nums[i]>nums[i-1]&&nums[i]>nums[i+1]))
           {
              ans+=1;
           } 
              
        }
        return ans;
    }
};