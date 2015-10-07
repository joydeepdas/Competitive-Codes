#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int p,t,c,time,k,temp,a[1005],bb[1005],test[1005],b[1005];
	cin>>t;
	while(t--){
	cin>>p;
	for(int i=0;i<p;i++){
		cin>>a[i];
		cin>>bb[i];
	}
	for(int i=0;i<p;i++){
		test[i]=0;
	}
	cin>>c;
	while(c--){
		for(int i=0;i<p;i++){
		b[i]=bb[i];
		}
		cin>>time;
		cin>>k;
		for(int j=0;j<p;j++)
		{
			b[j]=b[j]-a[j]*time;
			test[j]=b[j];
		/*	if(b[j]<0){
				b[j]=0;test[j]=0;
			}
			*/
		}
		sort(b,b+p);
		temp=b[k-1];
		for(int j=0;j<p;j++){
			if(test[j]==temp){
				cout<<j+1<<endl;break;
			}
		}
		
	}
	
	}
}
