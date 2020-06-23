#include<stdio.h>

int gcd(int a, int b)
{
	int t;
	if(a<b)
	{
		t = a;
		a = b;
		b = t;
	}
	while(b!=0)
	{	
		t = b;
		b = a%b;
		a = t;
		
	}
	return a;
}
int main(int argc, char const *argv[])
{
	int a=0,b=0;
	printf("enter values for a and b: ");
	scanf("%d%d",&a,&b);
	int result = gcd(a, b);
	printf("\ngcd of %d and %d is: %d\n", a,b,result);
}

