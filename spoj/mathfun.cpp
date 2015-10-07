#include<iostream>
#include<cmath>
unsigned int gcd (unsigned int n1, unsigned int n2) {
    return (n2 == 0) ? n1 : gcd (n2, n1 % n2);
}
using namespace std;
int main(){
	long long int t,A,B,x,y,c;
	cin>>t;
	while(t--){
		cin>>A;
		cin>>B;
		c=gcd(A,B);
		cout<<B/c<<" "<<A/c<<endl;
		
	}
}
