#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,k,t,a,b;
	cin>>t;
	while(t--){
		cin>>n;cin>>k;
		if(n !=0 && k==0){
			cout<<0<<endl;continue;
		}
		a=n-k;
		b=floor((k-1)/2 );
	cout<< ((a & b )==0)<<endl;
	}
}
