#include<iostream>
using namespace std;
int main(){
	double n;
	cin>>n;
	while(n>0){
		double i=1,s=0.5;
		
		while(s<n){i++;
			s=s+(1/(i+1));
		}
		cout<<i;cout<<" card(s)"<<endl;
		cin>>n;
	}
}
