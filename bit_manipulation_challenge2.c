#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num, bit;
    // printf("%ld", sizeof(int));
    printf("enter a number and the bit to set the number: \n");
    scanf("%d%d",&num,&bit);
    printf("\nthe value of num before setting is %d",num);
    printf("\nthe status of the bit is %d", (num >> bit) & 1);
    num |= (1 << 2);
    printf("\nthe value of num after setting bit %d is %d\n",bit, num);
    return 0;
}
