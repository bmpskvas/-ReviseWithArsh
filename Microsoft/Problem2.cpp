class Solution {
public:
vector<vector<int>>fynl;
void print( vector<int>a,int indx,int k,int coins,int n,vector<int>ans){
           if(n==0 && coins==k){
            fynl.push_back(ans);
             return;
           }
        if(indx==a.size() || n<0 || coins>k ){
           return;
        }
         
       ans.push_back(a[indx]);
       print(a,indx+1,k,coins+1,n-a[indx],ans);

       ans.erase(ans.begin() + ans.size() - 1);
       print(a,indx+1,k,coins,n,ans);
}  
    vector<vector<int>> combinationSum3(int k, int n) {
     vector<int>a{1,2,3,4,5,6,7,8,9};
     print(a,0,k,0,n,{});
    return fynl;
    }
};
