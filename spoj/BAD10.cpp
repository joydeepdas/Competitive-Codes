#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int nums=n*(n-1)/2;int a[nums+5],b[nums+5];
	for(int i=0;i<nums;i++){
		cin>>a[i];
		cin>>b[i];
	}
	int player=1;int count[n];int  players[n][n];
	for(int g=1;g<=n;g++){
		count[g]=0;
	}int v=0,c=0;
	for(player =1;player<=n;player++){
	v=0;
	for(int i=0;i<nums;i++){
		if(a[i]==player){
		for(int d=0;d<=v;d++){
			if(players[player][d]==b[i])
			{
				c=1;break;	
			}
		}
		
		
		if(c==0){
		
		count[player]+=1;
			for(int j=0;j<nums;j++){
				if(b[i]==a[j]){
				count[player]+=1;	players[player][v]=b[j];v++;
				}
			}
		}
	}
	}
	}
	for(int i=1;i<=n;i++){
	
	cout<<count[i]<<endl;
}
}
