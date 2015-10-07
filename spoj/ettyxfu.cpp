#include<iostream>
#include<cmath>

int abs(int a){
	if(a>0){
		return a;
	}
	else return a*-1;
}

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	
	int n,sum=0;
	cin>>n;int a[n][n];int b[n*n],c[n*n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			b[a[i][j]]=i;
			c[a[i][j]]=j;
		}
	}
	for(int j=1;j<n*n;j++){
		sum+=abs(b[j]-b[j+1])+abs(c[j]-c[j+1]);
	}
	cout<<sum<<endl;
}
}
