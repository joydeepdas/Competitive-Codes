#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int t;string s;char c[10005];
	cin>>t;int j,x;
	while(t--)
	{x=0;
	cin>>s;
	strcpy(c,s.c_str());
		for (int i=0; i<s.length(); i++)
    	{
        
       		int j;
        	for (j=0; j<i; j++)
           	{
		   		if (c[i] == c[j]){
			   
           	    	break;
           		}
			}
       
        	if (i == j){
			
          	x++;
         	}
    	}
    //cout<<x<<endl;
    	if(x%2!=0){
    		cout<<"Counter Terrorist"<<endl;
		}
		else{
			cout<<"Terrorist"<<endl;
		}
		
	}
}
