class Solution {
public:
    bool divideArray(vector<int>& nums) {
        if(nums.size()%2!=0||nums.size()==0) return false;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i=i+2){
            if(nums[i-1]!=nums[i]){
                return false;
            }
        }
        return true;
    }
};