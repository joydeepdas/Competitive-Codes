#include<iostream>
#include<cmath>
using namespace std;
int max(int a,int b){
	if(a>b){
		return a;
	}
	else b;
}
int s=0;
int coin(int n){
	if(n<12){
		return n;
	}
	else {
		s=coin(n/2)+coin(n/3)+coin(n/4);
		return max(s,n);
	}
}

int main(){
	int n;
	while(cin>>n)
	
	{
	cout<< coin(n)<<endl;s=0;}
	
}

