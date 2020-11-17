#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

#define MAX_COUNT 10

void childprocess(void);
void parentprocess(void);

int main(){
pid_t pid;
pid = fork();
 if (pid==0)
 childprocess();
 else if (pid > 0)
 parentprocess();
 else
     // fork failed
     printf("fork() failed!\n");
     return 1;
 
}

void childprocess(void){
    int i=0;
    for (i=1; i<= MAX_COUNT; i++)
    printf("this line is from child, value=%d\n", i);

    printf("***child process is done***\n");
}

void parentprocess(void){
    int i=0;
    for (i=1; i<= MAX_COUNT; i++)
    printf("this line is from parent, value=%d\n", i);

    printf("***parent process is done***\n");
}