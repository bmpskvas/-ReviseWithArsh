class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0;
        int cows=0;
        for(int i=0;i<secret.length();i++){
           if(secret[i]==guess[i]){
               bulls++;
           }
        }
       vector<int> arr1(10,0);
       vector<int> arr2(10,0);
        for(int i=0;i<secret.length();i++){
            int p=secret[i]-48;
            arr1[p]++;
        }
         for(int i=0;i<guess.length();i++){
            int q=guess[i]-48;
            arr2[q]++;
        }
        int ans=0;
        for(int i=0;i<10;i++){
            int mx=max(arr1[i],arr2[i]);
            ans+=mx-abs(arr1[i]-arr2[i]);
        }
        cows=ans-bulls;
        string fynl1="";
        if(bulls==0) fynl1+='0';
       else{
            while(bulls>0){
            int k=bulls%10;
            bulls=bulls/10;
            fynl1+=k+48;
        }
       }
        reverse(fynl1.begin(),fynl1.end());
        if(bulls==0) fynl1+='A';
         string fynl2="";
         if(cows==0) fynl2+='0';
         else{
            while(cows>0){
             int c=cows%10;
             cows=cows/10;
             fynl2+=c+48;
         }
         }
         reverse(fynl2.begin(),fynl2.end());
         if(cows==0) fynl2+='B';
         string fin="";
        fin+=fynl1;
        fin+=fynl2;
         return fin;
        
    }
};
