#include<stdio.h>
int main(int argc, char const *argv[])
{
int num1 = 25;
int num2 = 10;
int *pnum1 = &num1;
int *pnum2 = &num2;
int *product;
*product = *pnum1 * *pnum2;
printf("pnum1: %ls\npnum2: %ls", pnum1, pnum2);
printf("\nvalue at %ls is %d", product, *product);
return 0;
}