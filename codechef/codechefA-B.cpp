#include<iostream>

int main(){
	int a,b,c;
	cin>>a;cin>>b;
	c=a-b;
	if(c%10==9){
		c--;
	}
	else c++;
	cout<<c<<endl;
}
