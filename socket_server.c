#include<stdio.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<stdlib.h>

int main(){
    char server_message[] = "you have reached the server!";

    //create the server socket
    int server_socket;
    server_socket = socket(AF_INET, SOCK_STREAM, 0);

    // define the server address
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(9002);
    server_address.sin_addr.s_addr = INADDR_ANY;

// bind the socket to our specified
bind(server_socket, (struct sockaddr *) server_address, sizeof(server_address));
listen(server_socket, 5);

struct sockaddr_in client_address;
clilen = sizeof(client_address);
int client_socket;
client_socket = accept(server_socket, (struct sockaddr *) &client_address, NULL);

// client_socket = accept(server_socket, &client_address, (socklen_t *) sizeof(client_address));
// send the message
send(client_socket, server_message, sizeof(server_message), 0);
// close the socket
shutdown(server_socket, SHUT_RDWR);
return 0;
}