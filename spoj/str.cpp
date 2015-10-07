#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int cc=0;	int ccc;
	string s;int k,temp,temp2;
	cin>>k;cin>>s;
	char a[s.length()];

	strcpy(a,s.c_str());int max=0;
	for(int i=0;i<s.length();i++){
		temp=a[i]-'0';
		if(i==0){
		
		for(int j=i+1;j<s.length()-1;j++){
			
			temp2=a[j]-'0';
			temp=temp*10+temp2;//cout<<temp<<endl;
			if(temp%k==0 && temp>max ){
				max=temp;
			}
		}
	}
	else{
		for(int j=i+1;j<s.length();j++){
			
			temp2=a[j]-'0';
			temp=temp*10+temp2;//cout<<temp<<endl;
			if(temp%k==0 && temp>max ){
				max=temp;
			}
		}
	}
	}
	
		
	if(max>0){
	
	cout<<max<<endl;continue;
	}

	else{
		for(int i=0;i<s.length();i++){
			ccc=a[i]-'0';//cout<<ccc<<endl;
			if(ccc%k==0 && ccc>max){
				max=ccc;
			}
		}
		cout<<max<<endl;
	}
	
}
}
