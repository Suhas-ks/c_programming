#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch=0;
    // the line reads user input character by character and the loop terminates when certain
    // character or delimiter is encountered and is output to the stdout
    while((ch = getchar()) != EOF); 
    // ungetc() helps in writing back a desired character back to the stream
    ungetc('\n', stdin);
    printf("the character is %c\n", ch);
    return 0;
    
}
