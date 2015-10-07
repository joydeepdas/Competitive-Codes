#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

int lcm(int a, int b)
{
    int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];cin>>a[0];int lcm1=a[0];
		for(int k=1;k<n;k++){
			cin>>a[k];
			lcm1=lcm(lcm1,a[k]);
			
		}
		
		cout<<lcm<<endl;
	}
}
