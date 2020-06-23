#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
	int i,p;
	_Bool isPrime;
	int primes[50] = {0};
	primes[0]=2;
	primes[1]=3;
	int primeIndex = 2;
	for(p = 5; p<=100; p = p + 2 )
	{
		isPrime = true;
		for (i = 1; isPrime && i < primeIndex; ++i)
		{
			if (p % primes[i] ==0)
			{
				isPrime = false;
			}

		}
		if (isPrime==true)
		{
			primes[primeIndex] = p;
			++primeIndex;
		}

	}
	for (int j = 0; j < primeIndex; ++j)
	{
		printf("%d ", primes[j]);
	}
	printf("\n");
	return 0;
}