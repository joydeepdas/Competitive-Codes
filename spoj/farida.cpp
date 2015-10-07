#include <iostream>
using namespace std;

 unsigned long long int dp[1010];
 int t,n;
 unsigned long long int max(unsigned long long int a, unsigned long long int b){
 return a > b ? a : b;
 }
 int main(){
 int i, h,k;
 cin>>t;
 for(h=1;h<=t;h++){
  cin>>n;
  for(i=0;i<n;i++){
   
   cin>>k;
   dp[i]=max(k+(i>1?dp[i-2]:0),i>0?dp[i-1]:0);
  }
  cout<<"Case "<<h<<":"<<" "<<dp[n-1]<<endl;
 }

 return 0;
 }
