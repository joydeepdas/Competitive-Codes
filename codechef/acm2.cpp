#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,s,p,q,arp=1,arq=1,count=0,d1=1,d2=1;
		cin>>n;
		cin>>m;
		cin>>s;
		cin>>p;
		cin>>q;
		for(int i=1;i<=s;i++){
			d1=d2=1;
			if(arp+p>n){
				arp=m-1+p-(n-arp);
				d1=0;
			}
			if(d1!=0){
			
			if(p<=n){
			arp+=p;
			}
			}
			
	
			if(arq+q>n){
				arq=m-1+q-(n-arq);
				d2=0;
			}
			if(d2!=0){
			
			if(q<=n){
			arq+=q;
			}
			}
			if(arp==arq){
				count++;
			}
			
		/*	cout<<arp<<endl;
			cout<<arq<<endl;
			*/
		}
		cout<<count<<endl;
		
	}
}

