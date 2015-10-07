#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t,n,m,c=0;
	cin>>t;
	while(t--)
	{
		cin>>n;cin>>m;
		if(n==m){
			cout<<"0"<<endl;
			continue;
		}
		else if(n<m)
		{
			if(n%2==0)
			{
			/*	while(n!=m){
				
				n=n*2;c++;
			   }*/
			   cout<<log2(m)-1<<endl;
			   continue;
			}
			else 
			{   if(n==1){
			/*	while(n!=m){
				
				n=n*2;c++;
			   }
			   */
			   cout<<log2(m)<<endl;
			   
			   continue;
			   }
			   else{
			   
				n=(n-1)/2;c++;
				while(n!=m){
				
				n=n*2;c++;
			   }
			   cout<<c<<endl;
			   continue;
			}
			}
		}
		else {
			if(n%2==0)
			{
				while(n!=m){
				
				n=n/2;c++;
			   }
			   cout<<c<<endl;
			   continue;
			}
			else{
				while( (n%2)!=0 && n>m){
					n=(n-1)/2;
					c++;
				}
				while(n!=m){
					n=n*2;c++;
				}
			}
			cout<<c<<endl;
			break;
			
		}
		c=0;
	}
}
