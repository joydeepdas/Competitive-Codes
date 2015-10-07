#include<iostream>
#include<algorithm>
using namespace std;

void print (int** a,int n){
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int n;
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
	print(a,n);
}

