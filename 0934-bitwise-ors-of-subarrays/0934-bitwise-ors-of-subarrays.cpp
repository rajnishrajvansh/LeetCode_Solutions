class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int>curr,res,prev;
        for(int i=0;i<arr.size();i++){
            for(const int &x:prev){
                curr.insert(x|arr[i]);
                res.insert(x|arr[i]);
        }
        curr.insert(arr[i]);
        res.insert(arr[i]);
        prev=curr;
        curr.clear();
        }   
          return res.size();  
    }
};