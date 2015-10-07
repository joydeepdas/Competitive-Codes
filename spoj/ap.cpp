#include<iostream>
using namespace std;
int main(){

	int t,t3,t3end,s;
	int n,a,d;
	cin>>t;
	while(t--){
	
	cin>>t3>>t3end>>s;
	n=2*s/(t3+t3end);
	d=(t3end-t3)/(n-5);
	a=t3-2*d;cout<<n<<endl;cout<<a<<" ";
	for(int i=1;i<n;i++){
		
		cout<<a+d<<" ";a=a+d;
	}
	cout<<endl;
}
}
