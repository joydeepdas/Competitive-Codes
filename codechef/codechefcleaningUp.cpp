#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,m,o,a[1000],aa[500],aaa[500];
	cin>>n;
	for(int h=1;h<=n;h++){
		cin>>m;cin>>o;
		for(int i=0;i<o;i++){
			cin>>a[i];
		}
		sort(a,a+o);
		
/*		for(int i=0;i<o;i++){
			cout<<a[i]<<" ";
		}
		
	*/
/*	c=m-o;
	if(c%2==0){
	int	aa[c/2];
	int	aaa[c/2];
		
		
	}
	else{
		int aa[]
		
	}
	
	
	*/	int v=0;int cc[1000],l,ll,d;
	for(int j=1;j<=m;j++){
		for(int k=0;k<o;k++){
			if(j!=a[k]){
				d++;
			}
			
		}
		if(d==o){
		cc[v]=j;v++;	
		}
		
	}
	for(int i=0;i<=v;i=i*2){
		aa[l]=cc[i];l++;
	}
	for(int i=1;i<=v;i=i*2){
		aaa[ll]=cc[i];ll++;
	}
	for(int i=0;i<l;i++){
		cout<<aa[i]<<" ";
		
	}
	cout<<endl;
	for(int i=0;i<ll;i++){
		cout<<aaa[i]<<" ";
		
	}
	
	
		
	}
	
}

