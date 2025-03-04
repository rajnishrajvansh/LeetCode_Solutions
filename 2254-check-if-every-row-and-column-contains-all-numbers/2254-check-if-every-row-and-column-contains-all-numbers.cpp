class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            vector<bool> rowvisited(n,false);
            vector<bool> colvisited(n,false);
            for(int j=0;j<n;j++){
                int rowVal=matrix[i][j]-1;
                int colVal=matrix[j][i]-1;
                if(rowvisited[rowVal]||colvisited[colVal]){
                    return false;
                }
                rowvisited[rowVal]=true;
                colvisited[colVal]=true;
            }
        }
        return true;
    }
};