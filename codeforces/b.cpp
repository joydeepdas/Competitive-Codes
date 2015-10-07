#include<iostream>
using namespace std;
int main(){
	int n,m,max=-1,v,b;
	
		//cout<<c[1]<<endl;
	cin>>n;cin>>m;
	
	int a[m][n],c[n+1];for (int i=1;i<=n+1;i++){
		c[i]=0;
		}
	for (int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];}}
			for (int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]>max ){
				max=a[i][j];
				b=j;
			
			}
			
		}
		
		
		
		//cout<<b<<endl;
			c[b]=c[b]+1;
			//cout<<c[b]<<endl;
		max=-1;
	}
	cout<<c[0]<<endl;
	cout<<c[1]<<endl;
	cout<<c[2]<<endl;

	
}
	
	
	

