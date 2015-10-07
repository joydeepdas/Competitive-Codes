#include<iostream>
#include<cmath>
using namespace std;
int  main(){
	int t;
	cin>>t;
	while(t--){
	
	int m;float p;float  d=1000000000.00,e=0.00;
	cin>>m>>p;
	if(m%2!=0){
		if(m==1){
			cout<<d<<" "<<e<<endl;
		//	printf("%f",d);printf(" ");printf("%f\n",e);
			continue;
		}
		else  {
			if(pow(p,m-1)<=0.5){
				cout<<d*0.5<<" "<<d*0.5<<endl;
			//	printf("%f",d*0.5);printf(" ");printf("%f\n",d*0.5);continue;
			}
			else {
				cout<<d*pow(p,m-1)<<" "<<d-d*pow(p,m-1)<<endl;
			//	printf("%f",d*pow(p,m-1));printf(" ");printf("%f\n",d-d*pow(p,m-1));continue;
			}
		}
	}
	else if(m%2==0){
			if(pow(p,m-1)<=0.5){
			cout<<d*0.5<<" "<<d*0.5<<endl;
			//printf("%f",d*0.5);printf(" ");printf("%f\n",d*0.5);continue;	
				continue;
			}
			else {
				cout<<d-d*pow(p,m-1)<<" "<<d*pow(p,m-1)<<endl;continue;
			//	printf("%f",d-d*pow(p,m-1));printf(" ");printf("%f\n",d*pow(p,m-1));continue;
			}
	}
}
}

