#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>

void* my_function(void *ptr){
    printf("hello world");
    pthread_cancel(pthread_self());
    return NULL;
}

int main(){
    pthread_t thread = NULL;
    pthread_create(&thread, NULL, my_function, NULL);
    pthread_join(thread, NULL);
    return 0;
}