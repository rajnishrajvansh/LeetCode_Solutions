class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        int bestdia=0;
        int bestarea=0;
        for(int i=0;i<d.size();i++){
                int row=d[i][0];
                int col=d[i][1];
              int  res=row*col;
              int  pro=(row*row)+(col*col);
            if(pro>bestdia){
                bestdia=pro;
                bestarea=res;
            }
            else if(pro==bestdia&&res>bestarea){
                bestarea=res;
            }

            }
        return bestarea;
    }
};