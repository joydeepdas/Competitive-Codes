#include<iostream>
#include<cmath>
using namespace std;
 int  a[100005];
void runEratosthenesSieve( int upperBound,int* b) {

    int upperBoundSquareRoot = (int)sqrt((double)upperBound);

      bool *isComposite = new bool[upperBound + 1];
		int i=0;
     // memset(isComposite, 0, sizeof(bool) * (upperBound + 1));

      for (int m = 2; m <= upperBoundSquareRoot; m++) {

            if (!isComposite[m]) {

                 b[i]=m;
                i++;

                  for (int k = m * m; k <= upperBound; k += m)

                        isComposite[k] = true;

            }

      }
		
      for (int m = upperBoundSquareRoot; m <= upperBound; m++)

            if (!isComposite[m])

                {
				b[i]=m;
                i++;
			}
			
      delete [] isComposite; 
      

}




int main(){
	int t;int n,k,sum=0;runEratosthenesSieve(100005,a);long long int pro=1;
	cin>>t;
	
	while(t--){
		
	cin>>n;pro=1;
	
	for(int i=0;a[i]!=0 && a[i]<=n;i++){ 
		k=1;sum=1;
		while(floor(n/pow(a[i],k)!=0)){
			sum+=floor(n/pow(a[i],k));
			k++;
		}
		pro*=(sum%1000000007);
		pro=pro%1000000007;
	}
	cout<<pro%1000000007<<endl;
}
}
