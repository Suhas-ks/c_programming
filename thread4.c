#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>

// in order to return a value from the thread we use the following functionality
void *hello_return(void* args){
    char *hello = strdup("hello world");
    return (void *) hello;
}


int main(void){
char *str;
pthread_t thread;
pthread_create(&thread, NULL, hello_return, NULL);
pthread_join(thread, (void **) &str);
printf("thread return value is: %s\n", str);
pthread_exit(NULL);

return 0;
}






