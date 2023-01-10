class Solution {
public:
   double dis(int x1,int y1,int x2,int y2){
     double d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
     cout<<d<<endl;
     return d;
}
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        double x1,x2,x3,x4,y1,y2,y3,y4;
        double def=0;
        map<double,int>mp;
        vector<vector<int>>v(4,vector<int>(2));
        v[0]=p1;
        v[1]=p2;
        v[2]=p3;
        v[3]=p4;
        for(int i=0;i<4;i++){
            x1=v[i][0];
            y1=v[i][1];
            for(int j=i+1;j<4;j++){
                x2=v[j][0];
                y2=v[j][1];
             def=dis(x1,y1,x2,y2);
             if(def==0){
                return false;
            }
             mp[def]++;
            }
        }
        double mx=INT_MIN;
        double mn=INT_MAX;
        if(mp.size()==2){
         
            return true;
        }

        
        else{
            return false;
        }

    }
};
