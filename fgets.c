#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char buff[150], ch;
    char *p;
    fgets(buff, sizeof(buff), stdin);
    p = strchr(buff, '\n');
    if (p)
    {
        *p = '\0';
    }
    else
    {
        while (((ch = getchar()) != '\n') && !feof(stdin) && !ferror(stdin));
        
    }
    
    printf("the entered sentence is: %s\n", buff);
    return 0;
}
