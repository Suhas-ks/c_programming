#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{
    FILE *read, *write;
    read = fopen("pointer.txt","r");
    write = fopen("temp.txt", "w+");
    int ch=0;
    while ((ch = fgetc(read))!=EOF)
    {
        if (islower(ch)){
            ch -= 32;
        }
        fputc(ch, write);
    }
    fclose(read);
    read=NULL;
    fclose(write);
    rename("temp.txt","new_pointer.txt");
    return 0;
}
