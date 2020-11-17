#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>

// in order to pass multiple arguments to a thread, it is better to create an argument structure
struct thread_data
{
int thread_id;
int sum;
char *message;
};

typedef struct thread_data thread_arg_struct;

void *printHello(void *thread_arg){
    thread_arg_struct *my_data;
    int taskid=0, sum=0;
    char hello_msg[255];

    my_data = (thread_arg_struct *) thread_arg;
    taskid = my_data->thread_id;
    sum  = my_data->sum;
    strcpy(hello_msg, my_data->message);
    printf("taskid = %d, sum = %d, message=%s\n", taskid, sum, hello_msg);
}


int main(void){
    pthread_t thread;
thread_arg_struct my_thread_data;
my_thread_data.message = malloc(sizeof(char) * 255);
my_thread_data.thread_id = 10;
my_thread_data.sum = 35;
my_thread_data.message = "hello world!";
pthread_t my_id = pthread_create(&thread, NULL, printHello, (void *) &my_thread_data);
pthread_join(thread, NULL);
    pthread_exit(NULL);
    exit(0);
}






