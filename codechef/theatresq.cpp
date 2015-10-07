#include<iostream>
using namespace std;
int main(){
	int n,m,a,count1=1,count2=1;
	cin>>n;cin>>m;cin>>a;
	int c=n*m;
	int cc=a*a;
	while(n>=a){
		n=n-a;
		count1++;
	}
	while(m>=a){
		m=m-a;
		count2++;
	}
	cout<<count1*count2<<endl;
	
}
