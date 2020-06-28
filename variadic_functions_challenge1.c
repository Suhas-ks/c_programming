#include<stdio.h>
#include<stdarg.h>

int addNumbers(int n, ...);

int main(int argc, char const *argv[])
{
    printf("the sum of all numbers is %d\n",addNumbers(7, 5, 6, 3, 5, 54, 5, 3));

    return 0;
}

int addNumbers(int n, ...)
{
    va_list parg;
    va_start(parg, n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += va_arg(parg, int);
    }
    return sum;
}