#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
// make two proccesses which run same program after this instruction
fork();
printf("hello world\n");




    return 0;
}