#include <stdio.h>
#include<signal.h>
#include<unistd.h>


int main(void){
    alarm(5);

    // // NEED TO CATCH SIGALRM or process terminates
    // signal(SIGALRM, alarmHandler);


    for (int i=1; i < 10; i++){
        printf("%d\n", i);
        sleep(1);
    }

}