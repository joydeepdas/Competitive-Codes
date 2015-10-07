#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int t,n,z,x,p;cin>>t;
	while(t--){
		cin>>n;
		cin>>p;
		x=pow(p,n-1);
		z=(pow(p,n)-1)/(p-1);
		
		cout<<z%1000000007<<" "<<x % 1000000007<<endl;
	
	}
}
