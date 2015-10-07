#include<iostream >
using namespace std;
int main( ){
	int t;
	cin>>t;
	while(t--){
	
	
	int a=1,b=1,i=1,n;
	cin>>n;
	while(i!=n){
		if( a==1 && b==1 )
		{
			b++;
			i++;continue;
		}
		else if(a==1 & b!=1){
			if(b%2==0){
				while (a !=b && i!=n){
				i++;
				a++;
				b--;
			}continue;
			}
			else{
				b++;i++;
			}
				
		}
		else if(a!=1 && b==1){
			if(a%2==0){
				a++;i++;
			//	continue;
			}
			else{
				while (a !=b && i!=n){
				i++;
				a--;
				b++;
				}
			continue;
			}
		}
		
	}
	cout<<"a is "<<a<<" "<<" b is "<<b<<endl;		
}
}
