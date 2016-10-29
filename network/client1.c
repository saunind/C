#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <sys/un.h>
#include <unistd.h>
#include <stdlib.h>
 
int main(void)
{
    int sockfd = 0;
    struct sockaddr_un address;
    char ch = 'A';
 
    sockfd = socket(AF_UNIX, SOCK_STREAM, 0);

    address.sun_family = AF_UNIX;
    strcpy(address.sun_path, "server_socket");
    int len = sizeof(address);

    int result = connect(sockfd, (struct sockaddr *)&address, len);  
    
    if ( -1 == result ) {
	perror("oops: client");
	exit(EXIT_FAILURE);
    }

    write (sockfd, &ch, 1);
    read (sockfd, &ch, 1);

    printf("char from server = %c\n", ch);

    close(sockfd);
    
    exit(EXIT_SUCCESS);

//    return 0;
}         
