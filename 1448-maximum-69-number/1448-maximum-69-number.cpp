class Solution {
public:
    int maximum69Number (int num) {
        vector<int>vec;
          int maxnum=num;
        while(num>0){
            vec.push_back(num%10);
            num=num/10;
        }
    reverse(vec.begin(),vec.end());
     int size=vec.size();
     bool flag=false;
    for(int i=0;i<size;i++){
        if(flag==true) break;
        int res=0;
        int power=1;
        cout<<"i"<<i<<endl;
        if(vec[i]==6){
            vec[i]=9;
            flag=true;
        }
        for(int j=size-1;j>=0;j--){
           res=res+vec[j]*power;
           cout<<"j"<<j<<endl;
           power*=10; 
        }
        cout<<res<<endl;
        maxnum=max(maxnum,res);
    }
    return maxnum;
    }
};