#include<iostream>
using namespace std;
int main(){
 int n,i,j;
 long long int k,count=0, temp=0;
	cin>>n;cin>>k;
	 int* a=new int[1000006];
	 int* b=new int[1000006];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		b[i]=a[i];
	}
	if(k==0){
		cout<<n<<endl;
	}
	else{
	
	for(  i=0;i<n;i++){
		for( j=i+1;j<n;j++){
			
			
			temp=a[i]+b[j];
		
			if(temp%k==0 ){
				cout<<temp<<endl;
				count++;
				
			}
		}
	}
	cout<<count<<endl;
}
}
