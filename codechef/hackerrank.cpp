#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int t,a,b,n,c,m;
	while(t--){
		cin>> n;
		cin>>a;cin>>b;c=pow(2,n);
		int a[n+1][c];a[1][0]=0,a[0][0]=0;
		for(int i=2;i<=n;i++){
			for(int j=0;j<c;j++){
				if(j%2==0){m=j/2;
					a[i][j]=a[i-1][m]+a;
				}
				else{
					a[i][j]=a[i-1][j/2]+b;
				}
			}
		}
		for(int i=1;i<c;i++){
		for(int j=1;j<c;j++){
			if(a[n][i]==a[n][j]  && i!=j && a[n][i]!=0){
				//cout<<a[i]<<" "<<i<<" "<<j<<endl;;
				a[j]= 0;
				
			}
		}
	}
	for(int i=1;i<c;i++){
		if(a[n][i]!=0){
		cout<<a[n][i]<<" ";}
	}
	
		
		
		
		
	}
}
