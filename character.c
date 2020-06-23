#include<stdio.h>
int main()
{
    int num;
    char ch;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("\nenter a character: ");
    scanf(" %c",&ch);
    printf("\nthe number is %d",num);
    printf("\nthe character is %c", ch);
    return 0;
}
