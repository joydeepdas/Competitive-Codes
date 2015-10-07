#include <stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	int t;
	int n,s;int m[20100];
	int o;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&n);
		scanf("%d",&s);
		o=0;
		for(int j=0;j<s;j++){
			scanf("%d",&m[j]);
		}
		sort(m,m+s);
	//	sort(m,0,s-1);
		for(int j=0;j<s;j++){
			o=o+m[j];
			if(o==(s-j-2)) {
			o=s-j-2;
			break;}
			else if(o>s-j-2){
			o=s-j-1;
			break;}
		}
		printf("%d\n",o);
	}
	
}
