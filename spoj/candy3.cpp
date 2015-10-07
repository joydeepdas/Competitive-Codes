#include<iostream>
using namespace std;
int main(){
	long long int t,n;
	cin>>t;
	while(t--){
		cin>>n;long long int a[n],s=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			s+=(a[i]%n);
		}
		if(s%n ==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
