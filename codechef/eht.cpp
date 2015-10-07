#include<cstring>
#include<climits>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<bitset>
#include<stack>
#include<queue>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<functional>
#include<numeric>
using namespace std;
#define MAX 31623
#define LMT 178
typedef long long ll;

unsigned int base[MAX/64];
vector<int> primes;

#define sq(x) ((x)*(x))
#define mset(x,v) memset(x,v,sizeof(x))
#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))

/* Generates all the necessary prime numbers and marks them in base[]*/
void sieve()
{
		primes.push_back(2);
    unsigned i, j, k;
    for(i=3; i<LMT; i+=2)
        if(!chkC(base, i))
            for(j=i*i, k=i<<1; j<MAX; j+=k)
                setC(base, j);
    for(i=3, j=0; i<MAX; i+=2)
        if(!chkC(base, i))
            primes.push_back(i);
}
bool isPrime(ll N) { 
	if(binary_search(primes.begin(),primes.end(),N))
	return true; 
	for (int i = 0; i < (int)primes.size(); i++)
		if (N % primes[i] == 0) return false;
	return true; 
} 
long long  cfactors(ll N) 
{ // remember: vi is vector<int>, ll is long long

	ll PF_idx = 0, PF = primes[PF_idx]; // using PF = 2, then 3,5,7,... is also ok
	long long res=1;
	while (N != 1 && (PF * PF <= N)) 
	{ // stop at sqrt(N), but N can get smaller
		long long c=0;
		while (N % PF == 0) 
		{ 
		N /= PF; 
		c++;
		} // remove this PF
		res=res*(c+1);
	PF = primes[++PF_idx]; // only consider primes!
	}
	if (N != 1) res=res*2; // special case if N is actually a prime
	return res; // if N does not fit in 32-bit integer and is a prime number
} // then ‘factors’
int main()
{
	sieve();
	
	int t;
	scanf("%d",&t);

	while(t--)
	{
			int cnt=0;
		int a,b;
		scanf("%d%d",&a,&b);
		for(ll i=a;i<=b;i++)
		{
			if(isPrime(cfactors(i)))
				cnt++;
		}
		printf("%d\n",cnt);
		
	}
	return 0;
}
