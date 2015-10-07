#include<iostream>
using namespace std;
int main(){
	
	int t,count=0;
	cin>>t;
	while(t--)
	{
	count=0;
	
	int e,n;
	cin>>e;cin>>n;
	if(e<=n/2){
		cout<<e<<endl;continue;
	}
	if(n<=e/2){
		cout<<n<<endl;continue;
	}
	
	while(true){
	
	if(e<=n){
		
		e=e-1;
		n=n-2;
		if(e<0 || n<0){
			break;
		}
		else{
				count++;
		}
	
	}
	
	else if (n<e){
		n=n-1;
		e=e-2;
		if(e<0 || n<0){
			break;
		}
		else{
				count++;
		}
		}
	}	
	cout<<count<<endl;
	
	}
}
