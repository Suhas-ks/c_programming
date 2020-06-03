#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fp, *rev_fp;
    fp = fopen(argv[1],"r");
    rev_fp = fopen(argv[2],"w+");
    fseek(fp, 0, SEEK_END); // make sure to back up by a character because the last one is EOF;
    int pos = ftell(fp);
    int ch;

    int i=0;
    while (i < pos)
    {   
        i++;
        fseek(fp, -i, SEEK_END);
        ch = fgetc(fp);
        printf("%c",ch);
        fputc(ch, rev_fp);
    }
    

    // while(ftell(fp)>0)
    // {
    //     fseek(fp, -1L, SEEK_CUR);
    //     ch = fgetc(fp);
    //     printf("%c",ch);
    //     fputc(ch, rev_fp);
    // }
    printf("\n");
    fclose(fp);
    fclose(rev_fp);
    return 0;
}