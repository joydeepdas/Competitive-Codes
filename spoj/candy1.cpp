#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int  main(){
	int t;
	cin>>t;
	while(t>0){
	
	int a[t],s=0,c,q=0;
	for(int i=0;i<t;i++){
		cin>>a[i];
		s+=a[i];
	}
	sort(a,a+t);
	if(s%t==0){c=s/t;
		for(int j=0;j<t && a[j]<c;j++){
			q+=c-a[j];
		}
		cout<<q<<endl;
	}
	else {
		cout<<-1<<endl;
	}
	cin>>t;}
}
