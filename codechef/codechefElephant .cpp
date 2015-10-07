#include<iostream>
using namespace std;
int main(){
	int t;
	long long int n;
	long long int a[100];int m;int lol=0;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++){
			cin>>a[i];	lol=lol+a[i];
		}
		if(lol>m){
			cout<<"No"<<endl;
		}
		else cout<<"Yes"<<endl;
		
	}
}
