class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Max=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=max(nums[i],sum+nums[i]);
            Max=max(Max,sum);
           
        }
        return Max; 
    }
};