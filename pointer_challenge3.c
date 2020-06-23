#include<stdio.h>

int str_len(char *ptr);
int main(int argc, char const *argv[])
{

    int n=0;
    char temp;
    printf("enter a rough limit of charcters you want to enter: \n");
    scanf("%d",&n);
    char str[n+1];
    printf("enter the string: ");
    scanf("%c", &temp); // this is to just hold the '\n' or the carriage return which is obtained after pressing enter
    // the above character buffer is required because, fgets() stops reading at new line; if the first character itself is the new line
    // then the string will be stopped to read.
    // can also use it this way 'scanf(" ");'
    fgets(str, n, stdin);
    printf("the length of the string is %d\n", str_len(str));
    printf("the string read is: \n%s",str);
    return 0;
}

int str_len(char *const init)
{
    char *ptr = init;
    while(*ptr)
    {
        ptr++;
    }

    return (int)(ptr-init);
}