class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>num;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                 
                    num.push_back(nums[j]);
                }
            }
        }
        return num;
    }
};