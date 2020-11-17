#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void *print_message_function(void *ptr);

int main(void){
    pthread_t thread1, thread2;
    char *message1= "thread 1";
    char *message2= "thread 2";
    int iret1=0, iret2=0;

    // create independent threads each of which will execute function
    iret1 = pthread_create(&thread1, NULL, print_message_function, (void *) message1);
    iret2 = pthread_create(&thread2, NULL, print_message_function, (void *) message2);
    // wait till the threads are complete before the main function continues; unless we wait we run the risk of 
    // running an exit which will terminate the process and all threads before the threads have completed

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("thread 1 returns: %d\n", iret1);
    printf("thread 2 returns: %d\n", iret2);
    pthread_exit(NULL);
    exit(0);
}

void *print_message_function(void *ptr){
    printf("%s \n", (char *) ptr);
}





