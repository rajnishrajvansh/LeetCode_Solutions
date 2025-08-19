class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long res = 0;
        long long streak = 0; 

        for (int x : nums) {
            if (x == 0) {
                streak++;
                res += streak;  
            } else {
                streak = 0;     
            }
        }
        return res;
    }
};
