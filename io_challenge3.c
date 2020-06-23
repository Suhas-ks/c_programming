#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{   
    char *p = NULL;
    char *str = (char *) malloc(50 * sizeof(char));
    int char_count = 0;
    FILE *read;
    size_t size = 0;
    read = fopen(argv[2], "r+");
    while (getline(&str, &size, read)!=-1)
    {
        p = strchr(str, *argv[1]);
        if (p!=NULL)
        {
            char_count++;
            printf("%s",str);
            p = NULL;
        }

    }
    printf("\nthe number of lines where %c appears in \"%s\" is %d\n", *argv[1], argv[2], char_count);
    return 0;
}
