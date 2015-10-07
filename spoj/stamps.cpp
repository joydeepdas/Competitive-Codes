#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,m,t,s=0,c=0,s1=0;
	cin>>t;
	for(int tt=1;tt<=t;tt++){ c=0;s=0,s1=0;
		cin>>n;cin>>m;
		int a[m+1];
		for(int i=0;i<m;i++){
			cin>>a[i];
			s1+=a[i];
		}
		if(s1<n){
			
			cout<<"Scenario #"<<tt<<":"<<endl;
                    cout<<"impossible"<<endl;cout<<endl;
                    continue;
		}
		else if(s1==n){
			cout<<"Scenario #"<<tt<<":"<<endl;
                    cout<<m<<endl;cout<<endl;
                    continue;
		}
		else{
		
		sort(a,a+m);
		for(int j=m-1;j>=0;j--){
			
			if(s<n){
				
				s+=a[j];
				c++;continue;
			}
			else {
				cout<<"Scenario #"<<tt<<":"<<endl;
                    cout<<c<<endl;cout<<endl;
                    break;
			}
			
		}
	}
	
}

}
