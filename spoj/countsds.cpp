#include<iostream>
using namespace std;
int main(){
 unsigned  long long int n,i,j;
	unsigned  long long int k,count=0, temp=0;
	cin>>n;cin>>k;
	unsigned  long long * a=new int[1000006];
	unsigned  long long  * b=new int[1000006];
	for(unsigned  long long int i=0;i<n;i++){
		cin>>a[i];
	}
	for(unsigned  long long int i=0;i<n;i++){
		b[i]=a[i];
	}
	if(k==0){
		cout<<n<<endl;
	}
	else{
	
	for(  i=0;i<n;i++){
		a[i]=b[i];
		for( j=i+1;j<n;j++){
			
			
			temp=a[i]+b[j];
		
			if(temp%k==0 && a[i]!=0 ){
				a[i]=0;
				count++;
				
			}
		}
	}
	cout<<count<<endl;
}
}
