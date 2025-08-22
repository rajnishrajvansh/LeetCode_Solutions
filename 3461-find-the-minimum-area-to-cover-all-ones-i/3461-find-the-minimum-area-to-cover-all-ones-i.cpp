class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        if(grid.empty() || grid[0].empty()) return 0;
        int n=grid.size();
        int m=grid[0].size();
        int minRow=INT_MAX;
        int maxRow=INT_MIN;
        int minCol=INT_MAX;
        int maxCol=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    minRow=min(i,minRow);
                    maxRow=max(i,maxRow);
                    minCol=min(j,minCol);
                    maxCol=max(j,maxCol);
                }
            }
        }
        int res=(maxRow-minRow+1)*(maxCol-minCol+1);
        return res;
    }
};