#include<iostream>
using namespace std;
int main(){
	int n,n1,a[100],max[100],max1=0,g;
	
	cin>>n1;
	for(int i=1;i<=n1;i++){
			for(int j=1;j<=n;j++){
			max[j]=0;
		}
		cin>>n;
		for(int j=1;j<=n;j++){
			cin>>a[j];
		}
		for(int k=1;k<=n;k++){
			for(int x=1;x<=n;x++){
			if(a[x]==a[k]){
				max[k]=max[k]+1;
			}
		}}
		
/*	for(int j=1;j<=n;j++){
			cout<<max[j]<<" ";
		}
		*/
		
		
		for(int v=1;v<=n;v++){
			if(max[v]>=max1 && a[v]<=a[g]){
				max1=max[v];
				g=v;
			}
		}
		cout<<a[g]<<" "<<max1<<endl;
	}
}
