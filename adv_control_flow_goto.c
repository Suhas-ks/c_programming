#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("enter a number: \n");
    scanf("%d",&num);
    if (num >= 0 && num < 101)
    {
        goto there;
    }
    
    printf("I'm outside the label\n");
    return 0;
    there:
        printf("I'm inside a label\n");
        return 0;
}
