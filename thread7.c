#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>

pthread_attr_t attr;

void *dowork(){
size_t mystacksize;
pthread_attr_getstacksize(&attr, &mystacksize);
printf("thread %ld: stack size = %li bytes\n", pthread_self(), mystacksize);
pthread_exit(NULL);
}

int main(int argc, char *argv[]){
    pthread_t myThread;
    size_t stacksize;
    pthread_t myID;

    pthread_attr_init(&attr);
    pthread_attr_getstacksize(&attr, &stacksize);
    printf("default stack size = %li\n", stacksize);
    stacksize = 90000000;
    printf("amount of stack needed per thread = %li\n",stacksize);
    pthread_attr_setstacksize(&attr, stacksize);
    printf("creating thread with stack size = %li bytes\n", stacksize);
    myID = pthread_create(&myThread, &attr, dowork, NULL);
    if (myID){
        printf("error; return code from pthread_create() is %ld\n", myID);
        exit(-1);
    }
    pthread_exit(NULL);

}