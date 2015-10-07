#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int arrr[200005],j,h=0;
// marks all mutiples of 'a' ( greater than 'a' but less than equal to 'n') as 1.
void markMultiples(bool arr[], int a, int n)
{
    int i = 2, num;
    while ( (num = i*a) <= n )
    {
        arr[ num-1 ] = 1; // minus 1 because index starts from 0.
        ++i;
    }
}
 
// A function to print all prime numbers smaller than n
void SieveOfEratosthenes(int n)
{
    // There are no prime numbers smaller than 2
    if (n >= 2)
    {
        // Create an array of size n and initialize all elements as 0
        bool arr[n];
        memset(arr, 0, sizeof(arr));
 
        /* Following property is maintained in the below for loop
           arr[i] == 0 means i + 1 is prime
           arr[i] == 1 means i + 1 is not prime */
        for (int i=1; i<n; ++i)
        {
            if ( arr[i] == 0 )
            {
                //(i+1) is prime, print it and mark its multiples
                
                	arrr[j]=i+1;j++;
				
                markMultiples(arr, i+1, n);
            }
        }
    }
}


int f(int n)
{int hh=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			hh++;
		}
	}
	return hh;
}



// Driver Program to test above function
int main()
{	int t,count=0;
	cin>>t;SieveOfEratosthenes(1000000000);
	while(t--){
		count =0;
		
		int a,b;
		cin>>a;
		cin>>b;

 	for(int i=a;i<=b;i++){
  		//cout<<f(i)<<endl;
  		
  		for(int g=0;g<j && h<arrr[g];g++){
  			if(f(i)==arrr[g]){
  				count++;break;
			  }
		  }
		//cout<<count<<endl;
	//	cout<<endl;
	  }
	
	
   cout<<count<<endl;
	}
}
