#include <stdio.h>
#include<signal.h>
#include<stdlib.h>

int main(){
    printf("testing SIGSTOP\n");
    raise(SIGSTOP);
    // now in the terminal, if we build and run the executable, the program will stop
    // then if we lookup the process ID using the 'ps' command and send SIGCONT signal using the
    // "kill -s SIGCONT <pid>", it will continue running
    printf("I am back \n\n");
    return 0;
}