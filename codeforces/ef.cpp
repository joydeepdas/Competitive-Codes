#include<iostream>
using namespace std;
int main(){
long long	int n,m,max=-1,v,b;
	cin>>n;cin>>m;
long long	int a[m][n],c[n];
for(int j=1;j<=n;j++){
		c[j]=0;
	}
	for (long long int i=1;i<=m;i++){
		for(long long int j=1;j<=n;j++){
			cin>>a[i][j];
		if(a[i][j]>max ){
				max=a[i][j];
				b=j;
			//	c[j]++;
			}
		
		}
			
			c[b]++;
			
		max=-1;
		
	}
	
	
	
	
	
	
	max=-1;
	for(int j=1;j<=n;j++){
		cout<<c[j]<<endl;
	}
	
	/*for(long long int k=1;k<=n;k++){
		if(c[k]>max){
			max=c[k];
			v=k;
		}
	}
	cout<<v<<endl;*/}
	
	
	
	

	
