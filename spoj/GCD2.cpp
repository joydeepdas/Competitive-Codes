#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

int gcd1(int a, int b)
{
    if (b==0)
        return a;
    else
	return gcd1(b,a%b);
}
int mod(string s,char a[],int n){
	int m=0,d=0,s1=0;
	for(int i=0;i<s.length();i++){
		
		m=(a[i]-'0')+s1;
		d=m%n;
		s1=d*10;	
		
	}
	return d;
}
int main(){
	
	int t;cin>>t;
	while(t--){
	string s;
	int n;
	char a[205];
	cin>>n;
	cin>>s;
	
	strcpy(a, s.c_str());
	if(n==0){
		cout<<a<<endl;
	}
	else{
	
	
	cout<<gcd1(n,mod(s,a,n))<<endl;	
}
}
}
