#include<stdio.h>
#define SUM(a, b)\
a+b

int main(int argc, char const *argv[])
{
    int x, y;
    printf("enter two numbers: \n");
    scanf("%d%d",&x, &y);
    printf("\nthe sum of the numbers is %d\n",SUM(x, y));
}