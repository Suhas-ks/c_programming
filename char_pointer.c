#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char sent[] = "the quick brown fox";
    char letter = 'q';
    char *charPoint;
    charPoint = strchr(sent, letter);
    printf("address of pointer is \"%s\"\n", charPoint);
    printf("ascii value of letter is \"%d\"\n", *charPoint);
    return 0;
}
