#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,l=0,c;
		cin>>n;int a[n],p[100000];
		
		
		for(int i=2;i<=n;i++){
			for(int j=2;j<=int(sqrt(n));j++){
				if(i%j==0){
					c=0;
					break;
				}
				if(j==int(sqrt(n))){
					c=1;
				}
			}
			if(c==0){
				continue;
			}
			if(c==1){
				p[l]=i;l++;
			}
			
		}
		for(int k=0;k<=l;k++){
			cout<<p[k]<<endl;
		}
		
	}
}
