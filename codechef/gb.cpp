#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	
	double n, h=0,m=0;
	cin>>n;
	
	
	for(int i=0;i<=11;i++){
		for(int j=0;j<=59;j++){
			h=30*i+0.5*j;
			m=6*j;
			if(abs(h-m)<=180){
				if(n==abs(h-m)){
				
				printf("%.2d",i);
				printf(":");
				printf("%.2d\n",j);
				break;
			}
		}
			else if(abs(h-m)>180){
				if(n==360-abs(h-m)){
				
				printf("%.2d",i);
				printf(":");
				printf("%.2d\n",j);
				break;
			}
		}
		}
	}
}
} 
