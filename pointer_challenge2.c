#include<stdio.h>

void square(float *ptr);
int main(int argc, char const *argv[])
{
    float *pnum = NULL;
    float num;
    printf("enter a number to be squared: \n");
    scanf("%f",&num);
    pnum = &num;
    square(pnum);
    printf("\nthe squared number is %f", *pnum);
    
    return 0;
}

void square(float *ptr)
{
    *ptr *= *ptr;
}