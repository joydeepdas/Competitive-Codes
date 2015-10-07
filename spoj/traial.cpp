#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t,n,ii,jj,num=1,c;
	cin>>t;
	while(t--){
	cin>>n;
	int **a;
	a = new int *[n];
	for(int i = 1; i <n; i++)
   	{
		a[i] = new int[n];
	}	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j];
		}
	}
	
	for( ii=0;ii<n;ii++){
		for( jj=0;jj<n;jj++){
			if(a[ii][jj]==num){
				num=num+1;
			break;	
			}
		}
		}
		cout<<ii<<" "<<jj<<endl;
		
	}
	
	
	

	}
	
