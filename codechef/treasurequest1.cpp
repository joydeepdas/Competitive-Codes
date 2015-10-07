#include<iostream>
using namespace std;
int main(){
long long 	int n,p,q,s,nums,sum=0,f=0,z;
	cin>>n;
	long long int a[5005],test[5005];
	for(long long int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long int j=1;j<=n;j++){
		test[j]=0;
	}
	cin>>p;
	int pp[20005];
	for(long long int j=1;j<=p;j++){
		cin>>pp[j];
	}
	cin>>q;
	while(q--){
	sum=0,f=0;
	for(long long int h=1;h<=n;h++){
		test[h]=0;
		}
	cin>>s;cin>>nums;z=s;
	//for(int z=s;z<(nums+s);z++){
	while(nums--){
	//	z=(s+f)%p+((s+f)/p)*p;f++;
		z=(s+f)%p;f++;
		if(z==0)
		{
			z=p;
			if(test[pp[z]] !=1){
			sum+=a[pp[z]];
			test[pp[z]]=1;
			}
		}
		
		else if(test[pp[z]] !=1){
			sum+=a[pp[z]];
			test[pp[z]]=1;
			}
			
			//z=(z+1)%p+((z+1)/p)*p;
			
		}
	cout<<sum<<endl;
	}
	
}




	

