#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>

void* calls(void* ptr){
    // using pthread_self() get current thread_id
    printf("in function \nthread id = %ld\n", pthread_self());
    pthread_exit(NULL);
    return NULL;
}

int main(){
    pthread_t thread;
    pthread_create(&thread, NULL, calls, NULL);
    printf("in main \nthread id = %ld\n", thread);
    pthread_join(thread, NULL);
    return 0;

}