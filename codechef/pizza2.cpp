#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int p,t,c,time,k,temp,m;long long int min=1000000000;
	cin>>t;
	while(t--){
		
	cin>>p;
	int 	a[p];
	int bb[p];
	int b[p];
	for(int i=0;i<p;i++){
		cin>>a[i];
		cin>>bb[i];
	}

	
	cin>>c;
	while(c--){
		
		cin>>time;
		cin>>k;
		for(int i=0;i<p;i++){
		b[i]=bb[i];
		}
		for(int j=0;j<p;j++)
		{
			b[j]=b[j]+a[j]*time;
			if(b[j]<0){
				b[j]=0;}
		}
		
		while(k--){
			min=-1000000000;
			for(int i=0;i<p;i++){
				if(min<b[i]){
					min=b[i];m=i;
				}
			}
			 b[m]=-1000000000;
		}
		cout<<m+1<<endl;
	}
	cout<<endl;
	}
}
