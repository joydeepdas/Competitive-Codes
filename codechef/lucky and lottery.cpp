#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		
	
	int n,p;
	cin>>n;
	cin>>p;int k=0;
	while(pow(2,k)<=n){
		k++;
	}
	if(pow(2,k)!=n){
		k--;
	}

	int c=(n-pow(2,k))*2;
	if(n-p>=c){
		
		cout<<p+c<<endl;
	}
	else{
		cout<<c-(n-p)<<endl;
	}
}
}
