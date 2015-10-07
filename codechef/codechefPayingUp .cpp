#include<algorithm>
#include <iostream>
using namespace std;
int main(){
	int t,n,c,l,a[21];
	cin>>t;
	for(int s=1;s<=t;s++){
		cin>>n;cin>>c;l=c;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int j=n-1;j>=0 && c!=0;j--){
		        c=l;
	        for(int i=j;i>=0 && c !=0 ;i--){
				if(c>=a[i])
				{
					c=c-a[i];
				}
			}
				
			}
			if(c==0){
					cout<<"Yes"<<endl;
				}
			else {
			cout<<"No"<<endl;}
			
		
	}
	
}
