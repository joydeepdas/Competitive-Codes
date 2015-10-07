#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double a1,a2,a3,b1,b2,b3,x1,x2,x3,y1,y2,y3,o,valueswap,valueswap2,temp1,temp2;
	int c;
	cin>>a1;
	cin>>b1;
	cin>>a2;
	cin>>b2;
	cin>>a3;
	cin>>b3;
	
	x2=a1+a2-a3;
	x1=a1+a3-a2;
	x3=a2+a3-a1;
	y2=b1+b2-b3;
	y1=b1+b3-b2;
	y3=b2+b3-b1;
	
	double a[3],b[3];
	a[0]=x1;
	a[1]=x2;
	a[2]=x3;
	b[0]=y1;
	b[1]=y2;
	b[2]=y3;
	

	int min=1000000;
    for(int i=0;i<3;i++){
    	min=1000000;valueswap=a[i];valueswap2=b[i];
    	for(int j=i;j<3;j++){
    		if(min>=a[j]){
    			min=a[j];o=b[j];c=j;
			}	
		}
		
		a[c]=valueswap;b[c]=valueswap2;
		a[i]=min;b[i]=o;
		
	}
	
	
	for(int i=0;i<2;i++){
		if(a[i]==a[i+1]){
			if(b[i+1]<b[i]){
				temp1=a[i];
				temp2=b[i];
				a[i]=a[i+1];
				b[i]=b[i+1];
				a[i+1]=temp1;
				b[i+1]=temp2;
			}
		}
	}
	std::cout << std::fixed;
    std::cout << std::setprecision(4);
	for( int k=0;k<3;k++){
			cout<<a[k]<<" "<<b[k]<<endl;
		}
}

