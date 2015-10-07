#include<iostream>
using namespace std;
int main(){
	int t,n,a[10000],b[10000],c=0;
	cin>>t;cin>>n;
	while(t--){c=0;
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		if(i%8==1){
			a[i]=1;
		}
		else
		{
			a[i]=-1;
		}
	}
	for(int k=1;k<=n;k++){
		if(a[k]!=b[k]){
			c=0;break;
		}
		else {
			c++;continue;
		}
	}
    if(c==0)
		{
		for(int j=1;j<=n;j++){
         cout<<a[j]<<" ";}
		 cout<<endl;	continue;		
		}
    if(c==n)
		{cout<<a[n]<<"";
		for(int j=1;j<=n-1;j++){	
         cout<<a[j]<<" ";
		}
	cout<<endl;continue;
	}		
}
}
