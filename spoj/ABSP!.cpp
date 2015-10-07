#include<iostream>
#include<cmath>
using namespace std;

int abs1(int a){
	if(a<0){
		return a*-1;
	}
	else return a;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	
	long long int n;
	cin>>n;long long int a[n];
	for(long long int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long int sum=0,sum2=0;
	long long int abs;long long int b[n-1];
	for(long long int i=1;i<n;i++){
		b[i]=abs1(a[1]-a[i+1]);
		sum+=b[i];
	}
	for(long long int k=1;k<n-1;k++){
		sum2+=b[k]*(2*k+1-n);
	}
	cout<<sum2+(n-1)*b[n-1]<<endl;
}
}
