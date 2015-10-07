#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int q,l,r,cl=0,cr=0,ans;
	cin>>q;
	while(q--){
		cr=0;cl=0;
		cin>>l;cin>>r;
		
		if(r==5){
			cr++;
		}
		
		if((l-1)%6==4){
			cl++;
		}
		if((r)%6==4){
			cr++;
		}
		cl+=l/6;
		cr+=r/6;
		cout<<cl<<endl;
		cout<<cr<<endl;
		ans=pow(3,cr-cl);
		cout<<ans%4<<endl;
		
	}
}
