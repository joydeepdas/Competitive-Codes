#include<iostream>
using namespace std;
int main(){
	int a[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
	int n,c,m;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>c;
		
			for(int i=11;i>=0 && c !=0 ;i--){
				if(c>=a[i]){
					c=c-a[i];
				//	cout<<c<<endl;
					m++;
					if(c>=a[i]){
					i++;
				}
				}
				
			}
		cout<<m<<endl;
		m=0;
	}
	
}
