#include<iostream>
using namespace std;
int main(){
	long long int n,m,a,count1=1,count2=1;
	cin>>n;cin>>m;cin>>a;
	count1+=n/a;
	count2+=m/a;
	if(n%a==0){
		count1=n/a;
	}
	if(m%a==0){
		count2=m/a;
	}
	
	/*
	while(n>a){
		n=n-a;
		count1++;
	}
	while(m>a){
		m=m-a;
		count2++;
	}
	*/
	cout<<count1*count2<<endl;
	
}
