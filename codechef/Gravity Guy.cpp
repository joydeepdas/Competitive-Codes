#include<iostream>
#include<cstring>
using namespace std;
int main (){
	
	string s1,s2;int n,c=0,count,t,i;
	cin>>t;
	while(t--){
		c=0;
		getline(cin,s1);
		getline(cin,s2);
    	char c1[s1.length()],c2[s1.length()];
    	s1.copy(c1,s1.length());
		s2.copy(c2,s1.length());
	
		if(c1[0]=='.'){
				n=0;	
		}
		else if(c2[0]=='.'){
			n=1;
		}
		else {
			cout<<"No"<<endl;
		}
		for( i=1;i<s1.length();i++){
			if(c1[i]=='.'){
				if(n==0){
					n=0;
					continue;
				}
				else if(n==1){
						n=0;
						c++;	continue;
				}
			}
		
			else if(c2[i]=='.'){
				if(n==1){
					n=1;
					continue;
				}
				else if(n==0){
				n=1;
				c++;	continue;
				}
			}
		else{
			cout<<"No"<<endl;
			break;
		}	
	}
	if(i=s1.length()-1)
	{
	cout<<"Yes"<<endl;
	cout<<c<<endl;
	}
		
	}
}

