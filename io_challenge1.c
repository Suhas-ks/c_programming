#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int char_count = 0;
    char ch='\0';

    if(argc > 1)
    {
        FILE *fp = fopen(*(argv + 1), "r");
        if(fp!=NULL)
        {
            while((ch=getc(fp))!=EOF)
            ++char_count;
        }
    }
    else
    {
        while ((ch=getc(stdin))!=EOF)
        {
            ++char_count;
        }
        
    }
    printf("the number of characters in the file stream is %d\n",char_count);
    return 0;
    
}