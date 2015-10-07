#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main(){
	string s1,s2;	
	
	char ss1[100],ss2[100];int t;char a='?';
	cin>>t;
	while(t--){
	cin>>s1;cin>>s2;
	strcpy(ss1, s1.c_str());
	strcpy(ss2, s2.c_str());
	for(int i=0;i<s1.size();i++){
		if(  ss1[i]!=ss2[i] && (ss1[i]!=a && ss2[i]!=a)){
    		cout<<"No"<<endl;break;
		}
		else if(i==s1.size()-1){
			cout<<"Yes"<<endl;
		}
		
		}
	}
}

		
	

