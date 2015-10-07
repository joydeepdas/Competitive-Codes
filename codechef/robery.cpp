#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int m;double p,sum1,a=1000000000.00;
		cin>>m;cin>>p;
		sum1=a*(1-pow(-p,m))/(1+p);
		cout<<sum1<<" ";
		cout<<a-sum1<<endl;
	}
}
