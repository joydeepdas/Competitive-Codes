#include <iostream>
#include<cmath>
using namespace std;

long int fact(int n){
	if(n==0){
		return 1;
		
	}
	else return n*fact(n-1);
}

int main() {
	
	// your code here

long 	int n;
	cin>>n;
	cout<< fact(n)+pow(2,n)-n<<endl;
}
