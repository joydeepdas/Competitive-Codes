#include<iostream>
using namespace std;
int main(){
	int t;long long int k,n;
	cin>>t;
	while(t--){
	
		cin>>n;
		
		k = 3 * ((n * (n + 1))/2) - n;
		k = k % 1000007;
		
		cout<<k<<endl;
	}
}
