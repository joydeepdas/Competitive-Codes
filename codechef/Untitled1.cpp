#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main(){
 	int t,n, a[5000],min;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);min=a[1]-a[0];
		
			for(int j=1;j<n;j++){
				if(min>a[j]-a[j-1]){
					min=a[j]-a[j-1];
				}
			}
		
		cout<<min<<endl;
		
	}
}
