#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b;int aa[100000],bb[100000],i=0,j=0,count=0;
	cin>>a;cin>>b;
	while(a !=0){
		aa[i]=a%10;
		a=a/10;
		i++;
	}
	while(b !=0){
		bb[j]=b%10;
		b=b/10;
		j++;
	}

	for(int k=0;k<i;k++){
		if(aa[k]!=bb[k]){
			count++;
		}
	}
	if(count<=1){
		cout<<"wins"<<endl;
	}
	else{
		cout<<"loses"<<endl;
	}
}
