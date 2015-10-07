#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int t;string s;char c[10005];
	cin>>t;
	while(t--){
		cin>>s;
		strcpy(c,s.c_str());
		for (int i=0;i<s.length();i++){
			cout<<c[i]<<endl;
		}		
		
	}
}
