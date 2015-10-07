#include<iostream>
using namespace std;
int main(){
	int n;int q,b,c,d,cc;
	cin>>n;cin>>q;
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=0;
	}
	while(q--){cc=0;
		cin>>b>>c>>d;
		if(b==0){
			for(int i=c;i<=d;i++){
				a[i]++;
			}
		}
		else if(b==1){
			for(int i=c;i<=d;i++){
				if(a[i]%3==0){
					cc++;
				}
			}
			cout<<cc<<endl;
		}	
	}
}
