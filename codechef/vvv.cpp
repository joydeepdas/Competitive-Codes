#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int t;string s;char c[100005];
	cin>>t;int j,co=0;
	while(t--)
	{co=0;
	cin>>s;
	strcpy(c,s.c_str());
	for(int i=0;i<s.length();i++){
		for(int j=0;j<i;j++){
			if ( c[i]== c[j] && i!=j ){
				break;
			}
			if(j==i-1){
				co++;
			}
		}
	}
	cout<<co+1<<endl;
}
}
