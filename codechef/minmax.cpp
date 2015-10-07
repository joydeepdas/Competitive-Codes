#include<iostream>
using namespace std;

int min(int * a,int n){
	int min=1000000;
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	return min;
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		 int a[500005];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<min(a,n)*(n-1)<<endl;
	}
}
