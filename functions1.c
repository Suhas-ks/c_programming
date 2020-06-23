#include<stdio.h>

long long product(long long a, long long b)
{
	return a * b;
}
int main(int argc, char const *argv[])
{
	long long a,b;
	printf("enter values for a and b: \n");
	scanf("%lld%lld",&a,&b);
	long long result = product(a,b);
	printf("the product of two numbers %lld and %lld is: %lld\n", a, b, result);
	return 0;
}

