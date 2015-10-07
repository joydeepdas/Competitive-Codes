#include<iostream>
using namespace std;
int main(){
	int t,i=1;
	cin>>t;
	while(t--){
	
	double n;int cc=0;double sum=0;int counter=0;
	cin>>n;
	
	if(n==0){
		cout<<"00:00"<<endl;continue;
	}
	else{
	while( cc<12)
	{
		 if(i==60){cc++;
			//cout<<i<<endl;
			i=0;//cout<<i<<endl;
			if(cc<=6){
			
			counter++;}
			else{
				counter--;
			}
			sum=counter*30;//cout<<sum<<endl;cout<<n<<endl;
			if(sum==n){
			
			printf("%.2d",cc);
				printf(":");
					printf("%.2d\n",i);	
				}
				i++;
		}
		else if(i<=30){
			sum+=5.5;
			if(sum==n){	
				printf("%.2d",cc);
				printf(":");
					printf("%.2d\n",i);	
					i++;
			}
			
		}
		else if(i>30 && i<60){
			sum=sum-5.5;
			if(sum==n){
			
			printf("%.2d",cc);
				printf(":");
					printf("%.2d\n",i);	
					i++;	
				}
		}
		
	}
}
}
}
