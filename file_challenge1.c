#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    fp = fopen("pointer.txt","r");
    int num_lines=0;
    int ch;
    while ((ch = fgetc(fp))!=EOF)
    {
        if ((char) ch=='\n')
        {
            num_lines++;
        }
    }
    fclose(fp);
    printf("number of lines in the opened file is %d\n",num_lines);
    return 0;
}
