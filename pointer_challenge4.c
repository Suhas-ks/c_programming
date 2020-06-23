#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int str_len(char *ptr);
int main(int argc, char const *argv[])
{

    int n=0;
    char *text=NULL;
    printf("enter a rough limit of charcters you want to enter: \n");
    scanf("%d",&n);
    text = (char *)malloc(n * sizeof(char));
    if (text!=NULL)
    {
        printf("enter the string: \n");
        scanf(" ");
        fgets(text, n, stdin);
    }
    
    printf("the string read is: \n%s\n",text);
    free(text);
    text = NULL;
    if (!text){
        printf("*********MEMORY FREED**********\n");
    }
    else
    {
        printf("*********MEMORY NOT FREED**********\n");
    }
    
    return 0;

}