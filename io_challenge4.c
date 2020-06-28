#include <stdio.h>


float squrt(float n)
{
	float x=n;
	float y=1;
	float e = 1e-3;
	while(x-y>e)
	{
		x = (x+y)/2;
		y = n/x;
	}
	return y;

}

int is_prime(int num)
{
	if (num <= 1)
	{
		return 0;
	}
	for (int i =2; i <= (int) squrt((float) num) ; i++)
	{
		if (num%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main(int argc, char const *argv[])
{
    FILE *fp = fopen(argv[1],"r");
    int num=0;
	while (fscanf(fp, "%d", &num)!=-1)
	{
		if (is_prime(num))
		{
			printf("the number %d is prime\n", num);
		}
		else if (!(num & 1))
		{
			printf("the number %d is even\n", num);
		}
		else
		{
			printf("the number %d is odd\n", num);
		}
		
	}
    return 0;
}
