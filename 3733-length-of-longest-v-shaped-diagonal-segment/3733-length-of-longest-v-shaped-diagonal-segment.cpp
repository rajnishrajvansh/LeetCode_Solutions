class Solution {
public:
    vector<vector<int>>directions={{1,1},{1,-1},{-1,-1},{-1,1}};
    int find(vector<vector<int>>& grid,int i, int j, int dir,bool allowed, int target){
        int ni=i+directions[dir][0];
        int nj=j+directions[dir][1];
        if(ni<0||ni>=grid.size()||nj<0||nj>=grid[0].size()||grid[ni][nj]!=target){
            return 0;
        }
        int nottaketurn=1+find(grid,ni,nj,dir,allowed,2-target);
        int taketurn=0;
        if(allowed){
            taketurn = 1 +find(grid,ni,nj,(dir+1)%4,!allowed,2-target);
        }
        return max(taketurn,nottaketurn);
    }
    int lenOfVDiagonal(vector<vector<int>>& grid) {
        int ans=0,m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    for(int dir=0;dir<4;dir++){
                        ans=max(ans,1+find(grid,i,j,dir,true,2));
                    }
                }
            }
        }
      return ans;  
    }
};