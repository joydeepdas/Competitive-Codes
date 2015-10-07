#include<iostream>
#include<cmath>
using namespace std;
int main(){
	
	int n,m,t,c=0;
	cin>>t;
	while(t--){c=0;
	
	cin>>n;cin>>m;
		if(n==m){
		cout<<"0"<<endl;continue;
		}
 		
		else if((int)(log2(n))==log2(n)){
			if(n<m){
			
			while(n!=m){
				n=n*2;
				c++;
			}
			cout<<c<<endl;continue;
			}
			else{
				while(n!=m){
				n=n/2;
				c++;
				}
			cout<<c<<endl;continue;
			}
		}	
		else{
			while((int)(log2(n))!=log2(n)){
			
				if(n%2!=0){
					n=(n-1)/2;
					c++;
				}
				else{
					n=n/2;
					c++;
				}
			}
			if(n<m){
			
				while(n!=m){
					n=n*2;
					c++;
				}
				cout<<c<<endl;continue;
			}
			else{
				while(n!=m){
					n=n/2;
					c++;
				}
				cout<<c<<endl;continue;
			}
			
		}
	
	}
}
