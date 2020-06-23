#include<stdio.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{   
    int char_count = 0;
    char ch='\0';
    FILE *read, *write;
    read = fopen(*(argv + 1), "r");
    write = fopen("temp.txt", "w+");
    while ((ch=fgetc(read))!=EOF)
    {
        if islower(ch)
        {
            ch = toupper(ch);
        }
        fputc(ch, write);
    }
    fclose(read);
    FILE *end = write;
    fseek(write, 0, SEEK_SET);
    while(write!=end)
    {
        fputc(ch, stdout);
    }
    fclose(write);
    rename("temp.txt", *(argv + 1));
    // fclose(end);
    return 0;
}