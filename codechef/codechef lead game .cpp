#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;cin>>n;
	//int* a[][]=new int[n][2] ;
	int **a = 0;

//memory allocated for elements of rows.


a = new int *[n] ;

//memory allocated for  elements of each column.


for( int i = 0 ; i <n ; i++ )
{
a[i] = new int[2];
}
	
	
	for (int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin>>a[i][j];
		}
	}
	
	int maxa=0;//abs(a[0][0]-a[0][1]);
	int max1=0;//a[0][0]-a[0][1];
	for(int k=0;k<n;k++){
		if(max(abs(a[k][0]-a[k][1]),maxa)){
			max1=a[k][0]-a[k][1];
		 maxa=	abs(a[k][0]-a[k][1]);
		}
	}
	int c;
	if(max1>0){
		   c=1;
	     }
	else c=2;
	cout<<c<<" "<<maxa<<endl;
}
