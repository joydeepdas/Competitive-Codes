#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,s,p,q,arp=1,arq=1,count=0,d1=1,d2=1,j,d11=1,d22=1,xx,x;
		cin>>n;
		cin>>m;
		cin>>s;
		cin>>p;
		cin>>q;xx=p;x=q;
		for(int i=1;i<=s;i++){
			d1=d2=1;
			if(d11==0){
				p=xx;
			}
			if(d22==0){
				q=x;
			}
			
			
			if(arp+p>n){
				if(arp<m){
					d11=0;
					p=p-(m-arp);
					arp=m;
					
				}
				
				
				j=p%(n-m+1);
				if(arp+j>n){
					
				arp=m-1+j-(n-arp);	
				}
				else{
				
				arp=arp+j;
			}
				
				d1=0;
			}
			
			if(d1!=0){
			
			if(p<=n){
			arp+=p;
			}
			}
			
	
				
			if(arq+q>n){
				
				if(arq<m){
					d22=0;
					q=q-(m-arq);arq=m;
				}
				
				j=q%(n-m+1);
				if(arq+j>n){
				arq=m-1+j-(n-arq);	
				}
				else{
				
				arq=arq+j;
			}
				
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
			
			cout<<arp<<endl;
			cout<<arq<<endl;
			cout<<endl;
			
		}
		cout<<count<<endl;
		
	}
}

