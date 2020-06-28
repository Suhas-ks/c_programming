#include<stdio.h>
#define CUBE_FUNC(x)x*x*x
#define SQUARE_FUNC(x)x*x
#define PRINT(var, val)\
printf(#var"(%d)"" is %d\n", val, var ## _FUNC(val))
int main(int argc, char const *argv[])
{
    int x;
    printf("enter a positive integer:\n");
    scanf("%d",&x);
    PRINT(SQUARE, x);
    PRINT(CUBE, x);
    return 0;
}

