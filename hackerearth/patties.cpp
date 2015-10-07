#include<iostream>
#include<cmath>
using namespace std;
int  main(){
	int x,r;
	cin>>x;cin>>r;
	int sum=0,count=0;
	for(int i=0;sum!=r;i++){
		sum+=x*pow(2,i);
		count++;
	}
	cout<<count<<endl;
}
