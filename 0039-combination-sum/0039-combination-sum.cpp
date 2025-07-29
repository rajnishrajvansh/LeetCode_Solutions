class Solution {
public:
  vector<vector<int>> ans;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<int>vec;
       sort(candidates.begin(),candidates.end());
       set <int> s(candidates.begin(),candidates.end());
       candidates.assign(s.begin(),s.end());
       func(candidates,target,vec,0);
       return ans;
    }
    void func(vector<int>& candidates,int target,vector<int> &vec,int i){
        if(target==0){
            ans.push_back(vec);
        }
        if(i==candidates.size()) return;
        while(i<candidates.size() && target-candidates[i]>=0){
                vec.push_back(candidates[i]);
                func(candidates,target-candidates[i],vec,i);
                i++;
                vec.pop_back();
        }
    }
};