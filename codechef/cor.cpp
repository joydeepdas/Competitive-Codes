#include<iostream>
#include<cmath>
using namespace std;
int main(){
	 int t;	long long int n;
	cin>>t;
	while(t--){
	
		cin>>n;
		if(n==1){
			cout<<2<<endl;continue;
		}
		if(log2(n+1)==int(log2(n+1)) ){
			cout<<(int)(pow(2,log2(n+1)-1)-1)<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
}
