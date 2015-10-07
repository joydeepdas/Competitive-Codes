#include<iostream>
using namespace std;
int main(){
	int n=1;int a[100000];
	while(n!=0){
		cin>>n;
		if(n == 0){
			break;
		}
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int c=0;
		for(int i=1;i<=n;i++){
			if(a[a[i]]==i){	
			c++;
			}		
		}
		if(c==n){
			cout<<"ambiguous"<<endl;
		}
		else cout<<"not ambiguous"<<endl;
		
		
	}
}
