#include<stdio.h>
int main(int argc, char const *argv[])
{
    #ifdef __STDC_NO_COMPLEX__
        printf("complex arithmetic not supported\n");
    #else
        printf("complex arithmetic supported\n");
    #endif
    return 0;
}


