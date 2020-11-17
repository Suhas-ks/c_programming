#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void handler_dividebyzero(int signum);


int main(){
    int result = 0;
    int v1 = 0, v2=0;
    void (*sigHandlerReturn)(int);
    // SIGFPE is a floating point exception which we get when we divide by zero
    sigHandlerReturn = signal(SIGFPE, handler_dividebyzero);
    if (sigHandlerReturn==SIG_ERR){ // used to check if signal() returns any error because of invalid arguments to the signal() function
        perror("signal error: ");
        return 1;
    }
    
    v1=121;
    v2 =0;
    result = v1/v2;
    printf("result of divide by zero is %d\n",result);

    return 0;
}

void handler_dividebyzero(int signum){
    if (signum==SIGFPE){
        printf("received SIGFPE, divide by zero exception\n");
        exit(0);
    }
    else
    {
        printf("received %d signal\n", signum);
        return;
    }
    
}