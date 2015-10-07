#include<iostream>
#include<cstring>
using namespace std;
int main (){
	
	int n,c=0,count,t,i;
	cin>>t;
	while(t--)
	{string s1,s2;
		c=0;
		cin>>s1;
		cin>>s2;
		
    	char c1[s1.length()],c2[s2.length()];
    	
    	s1.copy(c1,s1.length());
		s2.copy(c2,s2.length());
		for(int i=0;i<s1.length();i++){
			cout<<c1[i]<<endl;
			cout<<endl;
		}
		for(int i=0;i<s2.length();i++){
			cout<<c2[i]<<endl;
			cout<<endl;
		}}}
