#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,m;double c;
	cin>>n;cin>>m;
	while(n >=0 && m>=0){
		
			if(n>m){
				c=ceil((double)n/(m+1));
				
				 /*if(c>=cc){
					cout<<c<<endl;
				}
				else{
					cout<<cc<<endl;
				}
				*/
				cout<<c<<endl;
			}
			else{
				c=ceil((double)m/(n+1));
				
			/*	if(c>=cc){
					cout<<c<<endl;
				}
				else{
					cout<<cc<<endl;
				}
				*/
				cout<<c<<endl;
			}
				cin>>n;cin>>m;
		}
	
	}

