#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a;cin>>b;cin>>c;
	int k=c%a;int k1=b%a;
	double kk=(double)k/k1;

	if(kk==int(kk) && kk<a){
		cout<<"Yes"<<endl;
	}
	
}
