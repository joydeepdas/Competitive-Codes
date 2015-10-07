#include<iostream>
using namespace std;
int main (){
	int a,b,c,v;
	cin>>a;cin>>b;cin>>c;
	while(a!=0 || b!=0 || c!=0){
		if((b-a)== (c-b)){
			cout<<"AP ";cout<<c+(b-a)<<endl;
		}
		else{
			cout<<"GP ";cout<<c*(b/a)<<endl;
		}
		cin>>a;cin>>b;cin>>c;
	}
}
