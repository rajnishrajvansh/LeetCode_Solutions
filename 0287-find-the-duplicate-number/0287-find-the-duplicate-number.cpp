class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
            vector<bool> matvisit(n,false);
            for(int j=0;j<n;j++){
                int visit=nums[j]-1;
                if(matvisit[visit]){
                    return nums[j];
                }
                matvisit[visit]=true;
            }
        return 0;
    }
};