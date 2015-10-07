#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int t,n,c=0;
	scanf("%d",&t);
	while(t--){
	c=0;
	//	scanf("%d",&n);
				for(long long int n=2;n<100;n++){
		
		for(int i=1;i<n;i++){
			if(sqrt(n*n-i*i)==(long long int)(sqrt((n*n-i*i)))){
				printf("YES\n");
				cout<<n<<endl;
				
				c=1;
				break;
			}
			
		}
		if(c==0){
			printf("NO\n");
		}
}

	
}}
