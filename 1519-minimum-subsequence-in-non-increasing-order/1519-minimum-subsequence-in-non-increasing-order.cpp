class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int l=0;
        int r=n;
       int ls=nums[0];
       int rs=nums[n];
        int sum=0;
        vector <int> vec;
        vec.push_back(nums[r]);
        while(l<r){
            if(ls<rs){
                l++;
                ls+=nums[l];
            }
            else{
                r--;
                rs+=nums[r];
                vec.push_back(nums[r]);
            }
        }
      return vec;
    }
};