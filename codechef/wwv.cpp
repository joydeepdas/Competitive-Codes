#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,x,count=0;
		cin>>n;
		cin>>m;
		cin>>x;
		int a[n+4];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n-1;i++){
			
				if((a[i]*2)%m <=x){
					{
						count++;
					}
					
				if((a[i]+a[i+1])%m<=x){
						count+=2;
					}
				}
				
			}
			if((a[n-1]*2)%m <=x){
				count++;
			}
			
				cout<<count<<endl;
		}
	
	}

