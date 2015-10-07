#include<iostream>
using namespace std;
int main(){
	int t,n,q,c=0;
	cin>>t;
	while(t--){
		cin>>n;cin>>q;
		int a[q][2];char b[n];
		for(int i=0;i<n;i++){
			b[i]='(';
		}
		for(int i=0;i<q;i++){
			cin>>a[i][0];
			cin>>a[i][1];
		if(c==0){
		
		if(a[i][0] %2 ==0){
			c=0;
			for(int j=a[i][0];j<=a[i][1];j++){
				if(j%2==0){
					b[j]='(';
				}
				else
				{
					b[j]=')';
				}
			}
		}
		
		else if(a[i][0] %2 !=0){
			c=1;
			for(int j=a[i][0];j<=a[i][1];j++){
				if(j%2!=0){
					b[j]='(';
				}
				else
				{
					b[j]=')';
				}
			}
			
		}
		}
		else if(c==1){
			for(int j=a[i][0];j<=a[i][1];j++){
				if(j%2!=0){
					b[j]='(';
				}
				else
				{
					b[j]=')';
				}
			}
		}
	}
	for(int k=0;k<n;k++){
		cout<<b[k]<<" ";
	}
}
}
