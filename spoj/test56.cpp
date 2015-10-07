#include<iostream>
#include<cmath>
using namespace std;
 int  a[10000];
void runEratosthenesSieve(int upperBound,int* b) {

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
	int n=1000;
	runEratosthenesSieve(n,a);
	for(int i=0;a[i]!=0 ;i++){
		cout<<a[i]<<endl;
	}
}
