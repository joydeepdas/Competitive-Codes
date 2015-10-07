#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cmath>
#define PI 3.14159
#define e 2.71828183


using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int nn;
		cin>>nn;
		cout<<log(2*PI*nn)/2 + (int)((double)(nn*(log(nn)-1))/log10+1<<endl;
	}}
