#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch=0;
<<<<<<< HEAD
    // // the line reads user input character by character and the loop terminates when certain
    // // character or delimiter is encountered and is output to the stdout
    // while((ch = getchar()) != EOF); 
    // // ungetc() helps in writing back a desired character back to the stream
    // ungetc(ch, stdin);
    // printf("the character is %c\n", ch);
    
    
    // till the EOF is reached, each character read is put back into the stream 
    while((ch = getchar()) != EOF)
    putchar(ch);
    ungetc(ch, stdin);
    printf("\n");
=======
    // the line reads user input character by character and the loop terminates when certain
    // character or delimiter is encountered and is output to the stdout
    while((ch = getchar()) != EOF); 
    // ungetc() helps in writing back a desired character back to the stream
    ungetc('\n', stdin);
    printf("the character is %c\n", ch);
>>>>>>> 4bb0119c995d9d2b0a1e7e60f0860a9d2e439cca
    return 0;
    
}
