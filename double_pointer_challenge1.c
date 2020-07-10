#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i = 5;
    int *ip = NULL;
    int **ipp = NULL;

    ip = &i;
    ipp = &ip;
    printf("int: %d\n", i);
    printf("int pointer: %d\n", *ip);
    printf("int pointer pointer: %d\n", **ipp);

    // OR
    printf("\n");

    *ip = i;
    *ipp = ip;
    printf("int: %d\n", i);
    printf("int pointer: %d\n", *ip);
    printf("int pointer pointer: %d\n", **ipp);

    return 0;
}
