#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	int s=n;
	
	
	
	for(int i=2;i<=n && (n/i-(i-1))>0;i++){
		s+=n/i-(i-1);
	}
	cout<<s<<endl;
}
