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
		
    	char c1[s1.length()],c2[s2.length()];
    	
    	s1.copy(c1,s1.length());
		s2.copy(c2,s2.length());
	
		if(c1[0]=='.'){
				n=0;	
		}
		else if(c2[0]=='.'){
			n=1;
		}
		else {
			cout<<"No"<<endl;continue;
		}
		
 
		for( i=1;i<s1.length();i++){
			if(n==0){
			
				if(c1[i]=='.'){
					n=0;
					continue;
				}
				else if(c2[i]=='.'){
						n=1;
						c++;	continue;
				}
				else{
				cout<<"No"<<endl;
				break;
			}
			}
		
			else if(n==1){
				if(c2[i]=='.'){
					n=1;
					continue;
				}
				else if(c1[i]=='.'){
				n=0;
				c++;	continue;
				}
				else{
				cout<<"No"<<endl;
				break;
			}
			}
				
		}
		if(i==s1.length())
		{
					
		cout<<"Yes"<<endl;
		cout<<c<<endl;
		}	
		
		
	}
}
