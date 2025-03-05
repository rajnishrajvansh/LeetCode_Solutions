class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        vector<int> vec;
        int n=nums.size()-1;
       int total=accumulate(nums.begin(),nums.end(),0);
        int subsum=0;
        for(int num:nums){
            subsum+=num;
             vec.push_back(num);
             if(subsum>total-subsum){
                return vec;
             }
        }
        return vec;

    }
};