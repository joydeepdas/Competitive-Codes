#include<iostream>
using namespace std;
int main(){
	int t,n,m;
	cin>>t;
	while(t--){
	
	cin>>n;cin>>m;
	if(n==m){
		cout<<n%2+(n/2)*4<<endl;
	}
	else if( n==m+2){
		cout<< m%2+(m/2)*4+2<<endl;
	}
	else cout<<"No Number"<<endl;
}
}
