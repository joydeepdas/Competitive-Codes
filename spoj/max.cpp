#include<iostream>
using namespace std;

int max(int* a,int n){
	int j,max=-1;
	for(int i=2;i<=n;i++){
		if(a[i]>max){
			max=a[i];
			j=i;
		}
	}
	return j;
}

int main(){
	int n,i,c=0;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(max(a,n)==1){
		cout<<"Yes"<<endl;
	}
	else{
		while(a[1]<=a[max(a,n)]){
			i=max(a,n);
		//	cout<<a[i]<<endl;cout<<a[1]<<endl;cout<<endl;
			a[i]--;
			a[1]++;c++;
			//	cout<<a[i]<<endl;cout<<a[1]<<endl;cout<<endl;
		}
	}
	cout<<c<<endl;
}
