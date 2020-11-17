#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>

void *threadfn(void *arg){
    pthread_detach(pthread_self());
    sleep(1);
    printf("thread fn\n");
    pthread_exit(NULL);
}

int main(int argc, char *argv[]){
    pthread_t tid;
    int ret= pthread_create(&tid, NULL, threadfn, NULL);

if(ret != 0){
    perror("thread creation failed\n");
    exit(1);
}

printf("after the creation of thread in main\n");
pthread_exit(NULL);

}