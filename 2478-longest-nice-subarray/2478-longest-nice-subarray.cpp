class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int res=0,left=0,bitMask=0;
        for(int right=0;right<nums.size();right++){
            while((bitMask&nums[right])!=0){
                bitMask^=nums[left];
                left++;
            }
            bitMask|=nums[right];
            res=max(res,right-left+1);
        }
        return res;
    }
};