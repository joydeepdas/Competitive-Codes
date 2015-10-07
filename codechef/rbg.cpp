#include<iostream>
#include<cmath>
using namespace std;

bool prime(int n){
	int c=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){c=0;
		
			break;
		}
	}
	if(c==0){	
	 return false;
	}
	else return true;
}

int main(){
	int n,c=0,a[100000];
	cin>>n;
	
	for (int i=1;i<=125;i++){
		if(prime(4*i+1)==true){
			a[c]=4*i+1;
		c++;
		}
		cout<<c;
	}
	
	}
