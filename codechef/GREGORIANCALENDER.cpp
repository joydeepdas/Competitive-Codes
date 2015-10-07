#include<iostream>
using namespace std;
int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n;
		if(n>=2001)
		{
			m=(n-2001)*365+(n-2001)/4;
		
			if(m % 7==0){
			cout<<"monday"<<endl;
			}
			if(m % 7==1){
			cout<<"tuesday"<<endl;
			}
			if(m % 7==2){
			cout<<"wednesday"<<endl;
			}
			if(m % 7==3){
			cout<<"thrusday"<<endl;
			}
			if(m % 7==4){
			cout<<"friday"<<endl;
				}
			if(m % 7==5){
				cout<<"saturday"<<endl;
			}
			if(m % 7==6){
			cout<<"sunday"<<endl;
			}
		}
		else if(n<2001)
		{
			m=(2000-n)*365+(2000-n)/4;
		
			if(m % 7==5){
			cout<<"monday"<<endl;
			}
			if(m % 7==4){
			cout<<"tuesday"<<endl;
			}
			if(m % 7==3){
			cout<<"wednesday"<<endl;
			}
			if(m % 7==2){
			cout<<"thrusday"<<endl;
			}
			if(m % 7==1){
			cout<<"friday"<<endl;
				}
			if(m % 7==0){
				cout<<"saturday"<<endl;
			}
			if(m % 7==6){
			cout<<"sunday"<<endl;
			}
		}
		
}}
