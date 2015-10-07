#include<iostream>
#include<cstring>
using namespace std;
int  main (){
	int n;
	char ar[52]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	cin>>n;n++;
	while(n--){
	string s;char h;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		for(int j=0;j<52;j++){
			if(s[i]==ar[j]){
				h=ar[j+1];break;
			}
			else {
			h=' ';
			}
		}
		if(s[i]=='z'){
		h='a';
		}
		if(s[i]=='Z'){
			h='A';
		}
		if(h!=' '){
		cout<<h;
		}	
	}
cout<<endl;
}
}
