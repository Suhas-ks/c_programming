#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdlib.h>

struct ptrs_char
{
  char *ptr1;
  char *ptr2;
};


int main(int argc, char const *argv[])
{
    struct ptrs_char check;

    check.ptr1 = (char*) malloc(50 * sizeof(char));
    check.ptr2 = (char*) malloc(50 * sizeof(char));
    if (check.ptr1 != NULL)
    {
        printf("enter string to test ptr1 in struct: ");
        fgets(check.ptr1, 50, stdin);
    }
    if (check.ptr2 != NULL)
    {
        printf("enter string to test ptr2 in struct: ");
        fgets(check.ptr2, 50, stdin);

    }
    printf("\n\nThe first pointer string is as follows: \"%s\"\n", check.ptr1);
    printf("The second pointer string is as follows: \"%s\"\n", check.ptr2);
    free(check.ptr1);
    free(check.ptr2);

    
    
    return 0;

}