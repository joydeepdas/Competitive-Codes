#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0;
		cin>>n;
		int a[n],b[n];
		
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		for(int j=0;j<n;j++)
		cin>>b[j];
		
		sort(a,a+n);
		sort(b,b+n);
		int j=0;
		for(int k=0;k<n && j<n;k++)
		{
			if(a[j]<=b[k])
			{
				c++;
				j++;
			}
			
		}
		cout<<c<<" ";
		
	}
	return(0);
} 
