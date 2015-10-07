#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,sum=0, n,m, bond,a[20010];
	scanf("%d",&t);
	while(t--){
	sum=0;
	
	scanf("%d",&n);	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+m);
	bond=m-1;
/*	if(a[0]==m-2){
		cout<<a[0]<<endl;
	}
	*/
	
	for(int i=0;i<m;i++){
		if(a[i]<bond){
			bond=bond-a[i]-1;sum+=a[i];
			continue;
			   
		}
		else if(a[i]>=bond){
			sum+=bond;break;
		}
	}
	printf("%d\n",sum );
}
}

	
	

