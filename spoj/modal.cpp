#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,n;
	cin>>t;
    while(t--){
    	cin>>n;
    	int a[n],b[n],s=0;
    	for(int i=0;i<n;i++){
    		cin>>a[i];
		}
		for(int i=0;i<n;i++){
    		cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		for(int i=0;i<n;i++){
			s+=a[i]*b[i];
	}
	cout<<s<<endl;	
}
}
