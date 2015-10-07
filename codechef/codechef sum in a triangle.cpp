#include<iostream>
using namespace std;

int max(int a,int b){
	return a>=b?a:b;
}

int main(){
	int n,c,a[100][100],A[100][100],n1;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>n1;
		for(int j=0;j<n1;j++){
			for(int k=0;k<=j;k++){
				cin>>a[j][k];
				A[j][k]=a[j][k];
			}
		}
		for(int j=n1-2;j>=0;j--){
			for(int k=0;k<=n1-2;k++){
				A[j][k]=A[j][k]+max(A[j+1][k],A[j+1][k+1]);
			}
		}
		cout<<A[0][0]<<endl;
		
		
	}
	
}

