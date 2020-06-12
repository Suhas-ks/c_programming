#include<stdio.h>
struct Name
{
    int length;
    char sent[];
};

int main(int argc, char const *argv[])
{
    struct Name name;
    printf("enter the number of characters in name: \n");
    scanf("%d",&name.length);
    fgets(name.sent, name.length, stdin);
    printf("\nname of the person is: %s\n",name.sent);
    return 0;
}
