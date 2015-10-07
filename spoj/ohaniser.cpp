#include<iostream>
using namespace std;

long long int pow1(long long int a,long long int b)
{	long long int c=1;
	for(int i=1;i<=b;i++){
		c=(c*(a%1000000007))%1000000007;
	
	}
 	return c;
}
int main(){
	long long int n,t,ans;
	cin>>t;
	while(t--){
	cin>>n;
	if(n==1){
		cout<<1<<endl;continue;
	}
	else{
	

	ans=(pow1(2,n-2)*((n+1)%1000000007))%1000000007;
	cout<<ans%1000000007<<endl;
	
	
}}}
