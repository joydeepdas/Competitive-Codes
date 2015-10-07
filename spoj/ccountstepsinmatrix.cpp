#include<iostream>
#include<algorithm>
using namespace std;


int num=1;
int n,d,e;
int min1(int a,int b,int c,int d){
	
	return min(a,min(b,min(c,d)));
}
int min2=100000;
int nos(int** a,int i,int j,int reqd,int n,int m,int count){
	if(i-1==n &&  j==m){
			return 1000000;
	}
	else if(i==n && j+1==m){
			return 1000000;
	}
	else if(i+1==n &&  j==m){
			return 1000000;
	}
	else if(i==n && j-1==m){
			return 1000000;
	}
	else if(i<1 || j<1 || i>n || j>n){
		return 10000000;
	}
	else {

	count =count+1;int temp=a[i][j];
	if(temp == reqd && min2>count){
		min2=count;d=i,e=j;
		return count;
	}

	else return min1(nos( a, i-1, j, reqd, i, j, count),nos( a, i+1,j,reqd,i,j,count),nos( a, i, j+1, reqd, i,j,count),nos(a, i, j-1, reqd,i,j, count))-1;
	}
}
int main(){
int t;	cin>>t;
while(t--){
	int c=0,n;
	cin>>n;
	int **a;
	a = new int *[n];
	for(int i = 0; i <n; i++)
   	{
		a[i] = new int[n];
	}	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int ii,jj,sum;
	
	for( ii=1;ii<=n;ii++){
		for( jj=1;jj<=n;jj++){
			if(a[ii][jj]==num){
				c=0;num=num+1;
			break;	
			}
		}
		if(c=0){break;
		}
	}
	d=ii;e=jj;
	sum=nos(a,d,e,num,d,e,0);
	for (int i=num+1;i<=n*n;i++){
		sum+=nos(a,d,e,i,d,e,0);
	}
	cout<<sum<<endl;
	
}
}
