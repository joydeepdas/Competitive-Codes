#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int t,i;
	cin>>t;
	while(t--){i=0;
		int n,max=-1;
		cin>>n;
		int a[n];
		for(int k=0;k<n;k++){
			cin>>a[k];
			if(a[k]>max){
				max=a[k];
			}}
			bool x=true;i=(int)sqrt(max);
			while(x==true){
			  for(int j=0;j<n;j++){
			  
				if ((int)(pow(i,2))% a[j]!=0){
					i++;
					break;
				}
				if(j==n-1){
					x=false;break;
				}
				
			}
		}
		cout<<i<<endl;
		cout<<pow(i,2)<<endl;
	}
}
