#include<iostream>
#include<cstring>
using namespace std;
int main (){
	
	int n,c=0,t,i;string s1,s2;
	cin>>t;
	while(t--)
	{
		c=0;
		cin>>s1;cin>>s2;
		
    	char c1[s1.length()+1],c2[s2.length()+1];
    	
    	s1.copy(c1,s1.length());
		s2.copy(c2,s2.length());
	
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
					
				}
				else if(n==1){
						n=0;
						c++;;
				}
			}
		
			else if(c2[i]=='.'){
				if(n==1){
					n=1;
					
				}
				else if(n==0){
				n=1;
				c++;	
				}
			}
			else{
				cout<<"No"<<endl;
				break;
			}	
		}
	
		
		cout<<"Yes"<<endl;
		cout<<c<<endl;
		
		
	}
}

