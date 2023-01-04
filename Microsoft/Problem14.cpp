class Solution {
public:
set<int>s;
void printDivisors(int n){
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
            {
              s.insert(i);
            }
            else {
                s.insert(n/i);
                s.insert(i);
            }
        }
    }
}
int findGCD(vector<int>& arr, int n)
{
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result = __gcd(arr[i], result);
 
    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}
    int minOperations(vector<int>& nums, vector<int>& nd) {
        int n=nd.size();
       int gc= findGCD(nd,n);
        printDivisors(gc);
        sort(nums.begin(),nums.end());
        int k=nums.size();
        int cnt=0;
        for(int i=0;i<k;i++){
            if(s.count(nums[i])){
                break;
           }
        else{
            cnt++;
        }
        }
        if(cnt==k) return -1;
        return cnt;
    }

   
};
