#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
	int sockfd, newsockfd, portno;
	//	char buffer[1024];
	socklen_t clilen;
	struct sockaddr_in serv_addr, cli_addr;

	sockfd = socket(AF_INET, SOCK_STREAM, 0);

	if (sockfd < 0)
	{
		printf("socket error");
		exit(1);
	}

	
}
	








/*{
	int socket_desc;
	struct sockaddr_in addr;

	socket_desc = socket(AF_INET, SOCK_STREAM, 0);

	if (socket_desc == -1)
	{
		printf("could not create socket");
	}
	
	server.sin_addr.s_addr = inet.addr("173.194.122.194");
	server.sin_family = AF_INET;
	server.sin_port = htons(80);

	if (connect(socket_desc, (struct sockaddr *)&server, sizeof(server)) < 0)
	{
		puts("connect error");
		return 1;
	}

	puts("connected");
	return 0;

}*/
