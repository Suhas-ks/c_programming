#include<stdio.h>
#include<stdlib.h>
struct Name
{
    int length;
    char sent[];
};

int main(int argc, char const *argv[])
{
    struct Name *name;
    int arr_len;
    printf("enter the size of the character array: \n");
    scanf("%d", &arr_len);
    name = malloc(sizeof(struct Name) + (arr_len * sizeof(char)));
    printf("\nenter the name: \n");
    scanf(" ");
    fgets(name->sent, arr_len, stdin);    
    printf("\nname of the person is: %s\n",name->sent);
    return 0;
}
