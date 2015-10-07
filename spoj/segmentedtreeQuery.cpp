#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void constructtree(int input[],int segmenttree[],int low,int high,int pos){
	if(low == high){
		segmenttree[pos]=input[low];return;
		}
	int mid =(low+high)/2;
		constructtree(input,segmenttree,low,mid,2*pos+1);
		constructtree(input,segmenttree,mid+1,high,2*pos+2);
		segmenttree [pos]=min(segmenttree[2*pos+1],segmenttree[2*pos+2]);
		
	}
	
int rangeMinQuery(int segtree[],int qlow,int qhigh,int low,int high,int pos){
	if(qlow<=low && qhigh >=high){//total overlap
		return segtree[pos];
	}
	if(qlow>high || qhigh<low){
		//no overlap;
		return 100000;
	}
	int mid=(low+high)/2;
	return min(rangeMinQuery(segtree,qlow,qhigh,low,mid,2*pos+1),
			rangeMinQuery(segtree,qlow,qhigh,mid+1,high,2*pos+2));
		}


int main(){
	int n,ls;
	cin>>n;int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(log2(n) ==	(int)(log2(n))){
		ls=n*2-1;
	}
	else {
		ls=pow(2,((int)(log2(n))+1))-1;
	}
	int segmenttree[ls];
	for(int i=0;i<ls;i++){
		segmenttree[i]=1000000;
	}
	constructtree( a, segmenttree,0,n-1,0);
	int q,l,h;
	cin>>q;
	while(q--){
	cin>>l;cin>>h;
	cout<<rangeMinQuery( segmenttree,l, h,0,n-1,0)<<endl;
}
}
