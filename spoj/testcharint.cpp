#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main(){
	string s;
	//int n;
	cin>>s;
	///cin>>n;
	char a[205];int aa[205];
	strcpy(a, s.c_str());//s1=0;
	for(int i=0;i<s.length();i++){
		aa[i]=a[i]-'0';
	}
	for(int i=0;i<s.length();i++){
		
	cout<<aa[i]<<endl;
		
	}
		//cout<<s1<<endl;
	
}
