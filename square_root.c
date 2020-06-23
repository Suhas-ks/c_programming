#include<stdio.h>
float squrt(float n);
float abst(float n);

int main(int argc, char const *argv[])
{
	float x,y;
	printf("enter a number to find it's square root: ");
	scanf("%f",&x);
	printf("enter a number to find it's absolute value: ");
	scanf("%f",&y);
	float s = squrt(x);
	float a = abst(y);
	printf("\nsquare root of %f is %f\n", x, s);
	printf("\nabsolute value of %f is %f\n", y, a);
	return 0;
}

float squrt(float n)
{
	float x=n;
	float y=1;
	float e = 1e-5;
	while(x-y>e)
	{
		x = (x+y)/2;
		y = n/x;
	}
	return y;

}

float abst(float n)
{
	return squrt(n*n);
}