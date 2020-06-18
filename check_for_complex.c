#include<stdio.h>
#include<complex.h>
int main(int argc, char const *argv[])
{
    #ifdef __STDC_NO_COMPLEX__
        printf("complex arithmetic not supported\n");
    #else
        printf("complex arithmetic supported\n");
    #endif
    float _Complex a = 3 + 4 * I;
    float complex b = 4 + 5 * I;
    float complex c, d;
    c = a + b;
    d = a - b;
    printf("\nthe result of complex addition is %f%+fi", crealf(c), cimagf(c));
    printf("\nthe result of complex subtraction is %f%+fi\n", crealf(d), cimagf(d));


    return 0;
}


