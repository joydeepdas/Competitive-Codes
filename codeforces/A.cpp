#include<iostream>
using namespace std;
int main(){
	int n,m,max=-1,v,b;
	cin>>n;cin>>m;
	int a[m][n],c[n+1];
	for (int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]>max ){
				max=a[i][j];
				b=j;
			//	c[j]++;
			}
			c[b]++;
		}
		
		max=-1;
	}
	max=-1;
	
	
	for(int k=1;k<=n;k++){
		if(c[k]>max){
			max=c[k];
			v=k;
		}
	}
	cout<<v<<endl;}
	

