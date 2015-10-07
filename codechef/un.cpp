#include<iostream>
#include<algorithm>
using namespace std;
int main()
{ 
    int n;
    cin>>n;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<endl;
	}
	int r=sizeof(a);
	sort(a,a+r);
	
	for(int i=1;i<=n;i++){
		cout<<a[i]<<endl;
	}
}
