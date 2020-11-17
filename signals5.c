#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handler(int signum) {
    if (signum == SIGINT){
        printf("CONTROL SIGNAL IS PRESSED!\n");
    }
}

int main(){
    void (*handlr)(int);
    struct sigaction sa;
    handlr = handler;
    sa.sa_handler = *handlr;
    while(1){
        printf("/");
        sleep(1);
        if(sigaction(SIGINT, &sa, NULL) == -1)
        perror("SIGACTION");
    }
// so on
    return 0;
}

