class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>vec;
        int left=0;
        int right=numbers.size()-1;
        while(left<right){
          int sum=numbers[left]+numbers[right];
            if(sum==target){
             vec.push_back(left+1);
              vec.push_back(right+1);
              return vec;
            }
           
           else if(sum>target){
                right--;
            }
            else{
                left++;
            }
        }
        return vec;
    }
};