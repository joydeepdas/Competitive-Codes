#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	double u, v, w, W, V, U,u1,v1,w1,volume;
	cin>> t;
	while(t--){
	
	
	cin>>u;cin>>v;cin>>w;cin>>W;cin>>V;cin>>U;
	
	u1 = v*v + w*w - U*U;
	v1 = w*w + u*u - V*V;
	w1 = u*u + v*v - W*W;
	
	volume = sqrt(4*u*u*v*v*w*w - u*u*u1*u1- v*v*v1*v1 - w*w*w1*w1 + u1*v1*w1) /12;
	//cout<<volume<<endl;
	printf("%.4f\n",volume);}

}
