#include<iostream>
#include<cmath>
using namespace std;

int primee(int n){
	int c=1;
	for(int j=2;j<=sqrt(n);j++){
		if(n%j==0){
			c=0;break;
		}
	}
	if(c==0){
		return 0;
	}
	else 
	{
		return 1;
	}
}


int main(){
	int cc=0,a[200000];
	for(int i=1;i<=1250000;i++){
		int c=4*i+1;
		if(primee(c)==1){
			//cout<<4*i+1<<endl;
			a[cc]=4*i+1;
			cc++;
		}
	}
	//cout<<cc<<endl;
	int t;
	cin>>t;
	while(t--){
	
	int n,ccc=1;
	cin>>n;
	for(int i=0;i<=cc && n<=a[i];i++){
		if(n==a[i]){ccc=0;
			cout<<"YES"<<endl;
			break;
		}
	}
	if(ccc==1){
		cout<<"NO"<<endl;
	}
}
}
