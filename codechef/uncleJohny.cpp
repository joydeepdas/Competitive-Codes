#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	
    long long int n,a[100],k,c,t;
	cin>>t;
	while(t--){
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>k;
	c=a[k];
	sort(a+1,a+(n+1));
	
		for(int j=1;j<=n;j++){
			if(a[j]==c){
			cout<<j<<endl;
			break;
		}
	}
	
	
}
}
