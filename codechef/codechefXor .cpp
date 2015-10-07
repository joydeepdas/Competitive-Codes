#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main(){
	int a[6]={1 ,4, 1, 8, 1, 2 };int nax=a[0];
	for(int i=1;i<6;i++){
		nax=nax^a[i];
	}
	cout<<nax;
}
