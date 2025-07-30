class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxval=*max_element(nums.begin(),nums.end());
        int maxlen=0;
        int currlen=0;
        for(int i=0;i<n;i++){
            if(nums[i]==maxval){
                currlen++;
                if(maxlen<currlen){
                    maxlen=currlen;
                }
            }
            else{
                currlen=0;
            }
        }
        return maxlen;
    }
}; 