class Solution {
public:
double slope(double x1,double y1,double x2,double y2){
    double sl;
    if(x1==x2){
        sl=INT_MAX;
        return sl;
    }
     sl=(y2-y1)/(x2-x1);
    return sl;
}
    int maxPoints(vector<vector<int>>& points) {
       
        int mx=INT_MIN;
        int n=points.size();
        if(n==1 ){
            return 1;
        }
        
        for(int i=0;i<n;i++){
            map<double,int>mp;
            double x1=points[i][0];
            double y1=points[i][1];
            for(int j=i+1;j<n;j++){
                double x2=points[j][0];
                double y2=points[j][1];
                double s=slope(x1,y1,x2,y2);
                mp[s]++;
            }
            for(auto k:mp){
                mx=max(k.second+1,mx);
            }
       }
       return mx;
    }
};
