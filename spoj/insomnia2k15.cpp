#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][2];
	for(int i=0;i<n;i++n){
		cin>>a[i][0]>>a[i][1];
	}
	int b[n][2],j=1;
	for(int i=0;i<n;i++){
		b[i][0]=a[i][0]*a[i][1];
		b[i][1]=j;j++;
	}
	int c[n];
		for(int i=0;i<n;i++){
		c[i]=b[i];
	}
	sort(c,c+n);
	
	int q,qq;
	cin>>q;
	while(q--){
		cin>>qq;
		for(int i=0;i<qq;i++){
			
		}
	}
}
