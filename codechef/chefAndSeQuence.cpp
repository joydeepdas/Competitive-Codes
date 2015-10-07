#include<iostream>
using namespace std;
int main(){
	int t,n,m,c=0;
	cin>>t;
	while(t--){
	    c=0;n=0;m=0;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		cin>>m;int aa[m];
		for(int i=1;i<=m;i++){
			cin>>aa[i];
			for(int j=1;j<=n;j++){
			   if(aa[i]==a[j]){
				c++;break;
			   }
		    }
		}
		if(c>=m){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
		
	}
} 
