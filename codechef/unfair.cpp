#include<iostream>
using namespace std;
int main(){
	int t;
	long long int n,k,sum;cin>>t;
	while(t--){
		cin>>n;
		cin>>k;
		sum=k*(k+1)/2;
		if(sum<n){
			cout<<"-1"<<endl;
			continue;
		}
		
		else if(n<k){
				cout<<k-1<<endl;continue;
		}
		else
		{	
			while(n>k){
				n-=k;
				k--;
			}
			cout<<k-1<<endl;	
		}
		
		
	}
}
