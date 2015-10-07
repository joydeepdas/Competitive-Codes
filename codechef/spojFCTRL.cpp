#include<iostream>
#include<cmath>
using namespace std;
int main(){int t, n,k=0,m=0;
	cin>>t;
	while(t--){
	cin>>n;
	while(pow(5,k) < n){
		k++;	
	}
	for(int i=1;i<=k;i++){
		m=m+ (n/pow(5,i));
	}
	cout<<m<<endl;k=0;m=0;
}
}


