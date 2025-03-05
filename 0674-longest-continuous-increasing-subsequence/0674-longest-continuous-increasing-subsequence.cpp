class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size()-1;
        if(n==0) return 1;
        int count=1;
        int res=1;
        for(int i=0;i<n;i++){
            if(nums[i]<nums[i+1]){
                count++;
                res=max(res,count);
            }
            else{
                count=1;
            }
            
        }
        return res;
    }
};