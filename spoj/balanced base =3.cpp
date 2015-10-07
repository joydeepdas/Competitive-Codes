#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i=0,j,t;
	cin>>t;
	while(t--){
	
	cin>>n;i=0;j=0;
	while(pow(3,i) <n){
		i++;
	} 
	j=i-1;
	cout<<"+";n=pow(3,i)-n;
	
	while(i--){
	
		if ( n!=0  && n>=pow(3,j)){
			n=n-pow(3,j);
			cout<<"-";
		}
		else { cout<<"0";
		}
		j--;

}

}cout<<endl;
}
