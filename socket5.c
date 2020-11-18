#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>

// setup structures with relevant host-service information

int main(){
int status;
struct addrinfo hints;
struct addrinfo *servinfo; //will point to the linked list containing the results of getaddrinfo() 
memset(&hints, 0, sizeof(hints));
hints.ai_family = AF_UNSPEC;
hints.ai_socktype = SOCK_STREAM;
hints.ai_flags = AI_PASSIVE;
if ((status = getaddrinfo(NULL, "3490", &hints, &servinfo))!=0){
    fprintf(stderr, "getaddrinfo error: %s\n", gai_strerror(status));
    exit(1);
}


freeaddrinfo(servinfo); // free the linked-list
    return 0;
}