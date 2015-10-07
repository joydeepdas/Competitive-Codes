#include<iostream>
#include<cmath>
using namespace std;
int main(){int n,s=0;cin>>n;
	while(n>0){s=0;
		for(int i=1;i<=n;i++){
			s+=pow(i,2);
		}
		cout<<s<<endl;
		cin>>n;
	}
}
