#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <sys/un.h>
#include <unistd.h>

int main(void)
{
    int server_sockfd = 0;
    int client_sockfd = 0;

    struct sockaddr_un server_address;
    struct sockaddr_un client_address;


    unlink("server_socket");
    
    server_sockfd = socket(AF_UNIX, SOCK_STREAM, 0);
    printf("socket is:%d", server_sockfd);
//    server_address.sun_family = AF_UNIX;
//    strcpy(server_address.sun_path, "server_socket");
//    int server_len = sizeof(server_address);
//
//    bind(server_sockfd, (struct sockaddr *)&server_address, server_len);
//    
//    listen(server_sockfd, 5);
//
    while (1) {
//	char ch;
//	printf("server waiting\n");
//
//	int client_len = sizeof(client_address);
//	client_sockfd = accept(server_sockfd, 
//	    (struct sockaddr *)&client_address, &client_len);
//
//	read(client_sockfd, &ch, 1);
//	ch++;
//	write(client_sockfd, &ch, 1);
//	close(client_sockfd);
    }

    return 0;
}
    
