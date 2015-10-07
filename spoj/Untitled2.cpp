#include<iostream>
#include<cmath>
using namespace std;
static int  a[10000];
void runEratosthenesSieve(int upperBound,int a[1000]) {

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
	int t;int n,k,sum=0,pro=1;
	
	cin>>t;
	runEratosthenesSieve(100,a);
	for(int i=0;a[i]!=0 &&a[i]<24;i++){
		cout<<a[i]<<endl;
	}
/*	while(t--){
	cin>>n;pro=1;
		for(int i=0;a[i]!=0 && a[i]<n;i++){ 
			k=1;sum=1;
			while(floor(n/pow(a[i],k)!=0)){
			sum+=floor(n/pow(a[i],k));
			k++;
			}
			pro*=sum;
		}
		cout<<pro<<endl;
	}*/	
}
