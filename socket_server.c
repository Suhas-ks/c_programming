#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>

short socketcreate(void){
    short hsocket;
    printf("create the socket\n");
    hsocket = socket(AF_INET, SOCK_STREAM, 0);
    return hsocket;
}

int bindcreatedsocket(int hsocket){
    int iretval=-1;
    int clientport = 12345;
    struct sockaddr_in remote = {0};
    
    // internet address family 
    remote.sin_family = AF_INET;

    // any incoming interface
    remote.sin_addr.s_addr = htonl(INADDR_ANY);
    remote.sin_port = htons(clientPort); // local port

    iretval = bind(hsocket, (struct sockaddr *)&remote, sizeof(remote));
    
}