#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main(){
	int t;string s;char c[100005];
	cin>>t;int j,co=0;
	while(t--){
	co=0;
	cin>>s;
	strcpy(c,s.c_str());
	for(int i=0;i<s.length();i++){
	/*	if(c[abs(c[i])]>0){
			c[abs(c[i])]=-c[abs(c[i])];
		}
		else{
			
		}
		*/
		cout<<c[abs(c[i])]<<endl;
	}
}
}
