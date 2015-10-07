#include<iostream>
#include<cmath>
using namespace std;
 int  a[10000];
void runEratosthenesSieve(int upperBound,int* a) {

      int upperBoundSquareRoot = (int)sqrt((double)upperBound);

      bool *isComposite = new bool[upperBound + 1];

     // memset(isComposite, 0, sizeof(bool) * (upperBound + 1));

      for (int m = 2; m <= upperBoundSquareRoot; m++) {

            if (!isComposite[m]) {

                 // cout << m << " ";

                  for (int k = m * m; k <= upperBound; k += m)

                        isComposite[k] = true;

            }

      }
		int i=0;
      for (int m = upperBoundSquareRoot; m <= upperBound; m++)

            if (!isComposite[m])

                {
				a[i]=m;
                i++;
			}
			
      delete [] isComposite; 
      

}




int main(){
	runEratosthenesSieve(100000,a);
	int t;int n,k,sum=0,pro=1;
	cin>>t;
	while(t--){
		
	cin>>n;pro=1;
//	runEratosthenesSieve(n,a);
	for(int i=0;a[i]!=0 && a[i]<n;i++){ 
		k=1;sum=1;
		while(floor(n/pow(a[i],k)!=0)){
			sum+=floor(n/pow(a[i],k));
			k++;
		}
		pro=(pro*sum)%10000007;
	}
	cout<<pro%10000007<<endl;
}
}
