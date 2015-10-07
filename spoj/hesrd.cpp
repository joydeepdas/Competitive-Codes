#include<iostream>
using namespace std;
int main(){
	long long int n,k,count=0;
	cin>>n;cin>>k;
	long long int a[1000006],b[1000006];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		b[i]=a[i];
	}
	
	long long int temp;
	for(long long int i=0;i<n;i++){
		for(long long int j=i+1;j<n-1;j++){
			
			
			temp=a[i]+b[j];
			if(temp%k==0){
				count++;
				
			}
		}
	}
	cout<<count<<endl;
}
