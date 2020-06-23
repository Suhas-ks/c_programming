#include<stdio.h>
#include<setjmp.h>

jmp_buf j;
int main(int argc, char const *argv[])
{
    int num;
    setjmp(j);
    printf("enter a number: \n");
    scanf("%d",&num);
    if (num >= 0 && num < 101)
    {
        longjmp(j, 1);
    }
    else
    {
        printf("gonna exit now...\n");
    }
    return 0;
}
