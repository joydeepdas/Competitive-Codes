#include <iostream>
#include<cmath>
using namespace std;

int main() {
	
	int t,n,c;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		c=(pow(2,n+1)-1)%1298074214633706835075030044377087;
		printf("%d\n",c);
		
	}


}
