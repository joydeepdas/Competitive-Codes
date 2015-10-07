#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,c=0,a[1000000];
	for (int i=0;4*i+1<=5000000;i++){
		if(prime(4*i+1)==true){
			a[c]=4*i+1;c++;
		}
		cout<<c;
	}
