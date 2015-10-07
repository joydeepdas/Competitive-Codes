#include<iostream>
using namespace std;
int main(){
	long long a[90],n;int t,i;
	a[0]=1;
	a[1]=1;
	for(int i=2;i<=90;i++){
		a[i]=a[i-1]+a[i-2];
	}
	cin>>t;
	while(t--){
	
    cin>>n;
    for( i=1;a[i]<=n;i++){
    	
	}
	cout<<i-1<<endl;
}
}
