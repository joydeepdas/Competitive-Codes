#include<iostream>
using namespace std;
int main(){
	int t,n,count=0,a[100005],k=0;
	cin>>t;
	while (t--){
	cin>>n;
	count=n;
	for (int i=0;i<n;i++){
		cin>>a[i];
}
	for(int i=0;i<n;i++){
		k=i;//cout<<a[i]<<endl;
		for(int j=i+1;j<n;j++){
			if(a[k]<=a[j]){
				k++;
				count++;
			}
			else{
				break;
			}
		}
	}
	cout<<count<<endl;
}
}
