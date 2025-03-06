class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ca=0,cb=0,cc=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                ca++;
            }
            else if(nums[i]==1){
                cb++;
            }
            else{
                cc++;
            }
        }
        int index=0;
        for(int i=0;i<ca;i++){
                nums[index++]=0;
            }
        for(int i=0;i<cb;i++){
                nums[index++]=1;
            }
        for(int i=0;i<cc;i++){
                nums[index++]=2;
            }
    }
};