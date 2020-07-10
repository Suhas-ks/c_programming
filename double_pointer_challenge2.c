#include<stdio.h>
#include<stdlib.h>

void allocateNumber(int **ptr);

int main(int argc, char const *argv[])
{
    int *intp = NULL;
    allocateNumber(&intp);
    *intp = 20;
    printf("the allocated string is: %d\n", *intp);
    printf("the size of allocated space is %ld\n",sizeof(intp));
    free(intp);
    return 0;
}

void allocateNumber(int **ptr)
{
    *ptr = (int *)malloc(sizeof(int));
}