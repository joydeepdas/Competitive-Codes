#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,x,count=0;
		cin>>n;
		cin>>m;
		cin>>x;
		int a[n+4];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				if((a[i]+a[j])%m <=x){
					if(i==j){
						count++;
					}
					else{
						count+=2;
					}
				}
			}
		}
		cout<<count<<endl;
	}
}
