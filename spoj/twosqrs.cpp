#include<iostream>
#include<cmath>

using namespace std;
bool sqrt1(long long int n){
	if(sqrt(n)==(int)(sqrt)(n)){
		return true;
	}
	else return false;
}

int main(){
	unsigned long long int i,t,n,c=0;
	cin>>t;
	while(t--){ c=0;
		cin>>n;
		for( i=0;i<=(int)(sqrt((double)n/2));i++){
			if(sqrt1(n-i*i)==true){
				cout<<"Yes"<<endl;
				c=1;
				break;
			}
		}
		if(c==0){
			cout<<"No"<<endl;
		}
	}
}
