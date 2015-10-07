#include<algorithm>
#include <iostream>
using namespace std;
int main(){
	int t,n,c,a[20];
	cin>>t;
	while(t--){
		cin>>n;cin>>c;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
	        for(int i=n-1;i>=0 && c !=0 ;i--){
				if(c>=a[i]){
					c=c-a[i];
				//	cout<<c<<endl;
				//	m++;
				/*	if(c>=a[i]){
					i++;
				}*/
				
				}
				}
				if(c==0){
					cout<<"Yes"<<endl;
				}
				else cout<<"No"<<endl;
				
			
		
	}
	
}
