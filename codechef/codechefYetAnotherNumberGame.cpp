#include<iostream>
#include<cmath>
using namespace std;
/*
bool prime(int n){
	int c=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
	
			return false;
		}
	}
	
    return true;
}
*/

int main(){
	int n,n1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>n1;
	/*	if(n1==1){
			cout<<"BOB"<<endl;
		}
		else if(n1==2){
			cout<<"ALICE"<<endl;
		}
		*/
		 if(n1%2==0){
			cout<<"ALICE"<<endl;
		}
		else cout<<"BOB"<<endl;
	}
}
