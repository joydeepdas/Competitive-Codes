#include<iostream>
using namespace std;

long long int mod(long long int n,long long int k){
	int c=1;
	for(long long int i=1;i<=k;i++){
		c=(c*(n%10000007))%10000007;
	}
	return c%10000007;
}

int main(){
	long long int n,k;cin>>n;cin>>k;
	cout<<(2*mod(n-1,k)+mod(n,k)+mod(n,n)+2*mod(n-1,n-1))%10000007<<endl;

	

}
