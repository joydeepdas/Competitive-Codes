#include<iostream>
using namespace std;
int main (){
	int t,n;
	cin>>t;cin>>n;
	while(t--){
		int x,y,c=1;
		cin>>x;cin>>y;
		while(y--){
			c=(c*(x%n))%n;
		//	cout<<c<<endl;
		}
	
	cout<<c<<endl;
}
}
