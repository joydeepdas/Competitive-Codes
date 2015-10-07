#include<iostream>
#include <algorithm>
#include<cmath>
using namespace std;
int main(){
	double t,b,ls,rsmin,rsmax;
	cin>>t;
	while(t--){
		cin>>b;cin>>ls;
		rsmax=sqrt(b*b+ls*ls);
		rsmin=sqrt(ls*ls-b*b);
		cout<<rsmin<<" "<<rsmax<<endl;	
	}
}
