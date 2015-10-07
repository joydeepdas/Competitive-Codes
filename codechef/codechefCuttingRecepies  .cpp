#include<iostream>
using namespace std;
int gcd1(int a,int b){
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	return a;
}
int main(){
	int n,a[50],gcd,n1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>n1;
		for(int j=1;j<=n1;j++){
			cin>>a[j];
		}
		gcd=a[1];
		for(int k=2;k<=n1;k++){
			gcd=gcd1(gcd,a[k]);
		}
		for(int m=1;m<=n1;m++ ){
			cout<<a[m]/gcd<<" ";
		}
		cout<<endl;
	}
}
