#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<floor(n * (n + 2) * (2*n + 1) / 8)<<endl;
	}
}
