#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i]==a[j]  && i!=j && a[i]!=0){
				//cout<<a[i]<<" "<<i<<" "<<j<<endl;;
				a[j]= 0;
				
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]!=0){
		cout<<a[i]<<endl;}
	}
	
	
	}
	
		
		

