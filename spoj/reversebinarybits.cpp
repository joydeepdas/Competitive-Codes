#include<iostream>
#include<cmath>
using namespace std;




/* Function to reverse bits of num */
 int reverseBits(int num)
{
	 int NO_OF_BITS = sizeof(num) * 8;
	 int reverse_num = 0, i, temp;

	for (i = 0; i < NO_OF_BITS; i++)
	{
		temp = (num & (1 << i));
		if(temp!=0)
			{
			reverse_num = reverse_num | (1 << ((NO_OF_BITS - 1) - i));
		}
	}

	return reverse_num;
}

/* Driver function to test above function */
int main()
{
	 int x =12; 
	cout<<reverseBits(x);
	
}
