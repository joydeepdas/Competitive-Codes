#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	if(log2(n)-(int)(log2(n))==0){
		cout<<"TAK"<<endl;
	}
	else{
		cout<<"NIE"<<endl;
	}
}
