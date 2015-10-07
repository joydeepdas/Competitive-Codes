#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int t,n,m,i,j,s1=0,s2=0;
	cin>>t;
	while(t--){i=0;j=0;s1=0,s2=0;
		cin>>n;cin>>m;long long int a[n],b[m];
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>s1){
				s1=a[i];
			}
		}
		for(j=0;j<m;j++){
			cin>>b[j];
			if(b[j]>s2){
				s2=b[j];
			}
		}
		if (s1<s2){
			cout<<"MechaGodzilla"<<endl;
		}
		else{
			cout<<"Godzilla"<<endl;
		}
	}
}
