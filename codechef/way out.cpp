#include<iostream>
using namespace std;
int main(){
	int t,N,H,a[1000][1000],max=0,c=0,largerRow,count=0;
	cin>>t;
	while(t--){
		cin>>N;cin>>H;
		for(int i=0;i<N;i++){
			cin>>Ii;cin>>Hi;
			for(int j=Ii;j<=Hi;j++){
				a[i][j]=1;
			}
		}
		for(int k=N-1;k>=0;k--){
			for(int j=0;j<N;j++){
				if(a[k][j]==1){
					c++;
				}
			}
			if(c>max){
				max=c;largerRow=k;
			}
		}
		if(k-H >= -1){
			for(int j=k;j>k-H;j--){
				for(int g=0;g<N;g++){
				if(a[j][g]==0){
					count++;
				}
			}
		}
		else {
			
		}
		
		
	}
}
