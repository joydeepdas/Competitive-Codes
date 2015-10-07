#include<iostream>
using namespace std;
int main(){
	long long int t,n;
	cin>>t;
	while (t--){
	cin>>n;
	long long int a[n+10];
	for (long long int j=0;j<n;j++){
		cin>>a[j];
}

	long long int previous=0,now=0;
	for(long long int i=0;i<n-1;i++){
		
		if(a[i]<=a[i+1]){
			now=now+previous+1;
		//	cout<<now<<endl;
			previous=previous+1;
		}
		else{
			previous=0;
		}
				
	}
	cout<<now+n<<endl;
}
}
