#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <netdb.h>

int main(int argc, char *argv[]){
    struct sockaddr_in serverAddr;
    int socketfd; // socket file descriptor

    if(argc<2){
        fprintf(stderr, "usage: ./%s <port>\n", argv[0]);
        exit(-1);
    }

int portno = atoi(argv[1]);

socketfd = socket(AF_INET, SOCK_STREAM, 0);
if(!socketfd){
    perror("error in opening socket\n");
    exit(1);
}
serverAddr.sin_family = AF_INET;
serverAddr.sin_addr.s_addr = htonl(INADDR_ANY); //inaddr_any helps to take address of the localhost
serverAddr.sin_port = htons(portno);

if (bind(socketfd, (struct sockaddr *)&serverAddr, sizeof(serverAddr)) != 0 ){
    perror("failed to bind");
    exit(2);
}

if(listen(socketfd, 5)){
    perror("error in listen\n");
    exit(4);
}
int optval = 1;
return 0;
}

