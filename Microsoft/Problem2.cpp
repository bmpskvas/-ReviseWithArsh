class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int org=0;
        for(int i=0;i<n;i++){
           sum+=nums[i];
           org+=nums[i]*i;
        }
        long long mx=org;
        for(int i=n-1;i>=0;i--){
          org+=sum-(nums[i]*n);
          if(org>mx){
              mx=org;
          }
        }
        return mx;
    }
};
