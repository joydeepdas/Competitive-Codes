#include<iostream>
#include<conio.h>
#include<stdlib.h>
 
using namespace std;
 /*
int gcd(int x, int y)
{
    int r = 0, a, b;
    a = (x > y) ? x : y; // a is greater number
    b = (x < y) ? x : y; // b is smaller number
 
    r = b;
    while (a % b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}
 */
int lcm(int x, int y)
{
    int a;
    a = (x > y) ? x : y; // a is greater number
    while (true)
    {
        if (a % x == 0 && a % y == 0)
            return a;
        ++a;
    }
}
 
int main()
{
    int n,o=0,c;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int gcd1=a[0];
	
	for(int i=1;i<n;i++){
		gcd1=lcm(gcd1,a[i]);
	}
	
	for(int i=1;i<n;i++){o=0;
		c=gcd1/a[i];
		while(c%2==0 || c% 3==0){
			if(c%2==0){
				c=c/2;
			}
			if(c%3==0){
				c=c/3;
			}
		}
		if(c==1){
			continue;
		}
		else{	o=1;
			break;
		}
	}
	if(o==0){
		cout<<"Yes"<<endl;
	}
	
	else if(o==1){
			cout<<"No"<<endl;
		}
  
}
