#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std
int main(){
	string s1,s2;	
	
	char ss1[100],ss2[100];int max=0,min=0,t;char a='?';

/*	for(int i=0;i<s1.size();i++)
	{
		cout<<ss1[i];
	}*/
	
	cin>>t;
	while(t--){
	cin>>s1;cin>>s2;max=0;min=0;strcpy(ss1, s1.c_str());
	strcpy(ss2, s2.c_str());
	for(int i=0;i<s1.size();i++){
    	if(  ss1[i]==ss2[i] || (ss1[i]==a || ss2[i]==a)){
    		min++;
		}
		
		if(ss1[i]!=ss2[i] || ss2[i]==a || ss1[i]==a){
			max++;
		}
		}
	

	cout<<s1.size()-min<<" "<<max<<endl;
}
}
