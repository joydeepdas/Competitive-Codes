#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 long long	int a,b,c=1,t,k;
 cin>>t;
 while(t--){
 	
	cin>>a;cin>>b;k=a%10;c=1;
	while(b--){
		c=c*k;
		c=c%10;
	}
	cout<<c<<endl;
}
}
