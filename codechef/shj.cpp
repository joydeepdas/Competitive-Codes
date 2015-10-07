#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[3]={3,1,6};
	sort(a,a+3);
	for(int i=0;i<3;i++){
		cout<<a[i]<<endl;
	}
}
