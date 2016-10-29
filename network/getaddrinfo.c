#include <sys/types.h>
#include <sys/socket.h>
#include <nedtdb.h>

int getaddrinfo(const char *node, const char *service, 
		const struct addrinfo *hints, struct addrinfo **res);

int status;
struct addrinfo hints;
struct addrinfo *servinfo;

    memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_PASSIVE;

    if ((status = getaddrinfo(NULL, "3490", &hints, &servinfo)) != 0) {
	fprintf(stderr, "getaddrinfo error: %s\n", gai_strerror(status));
	exit(1);
    }

    freeaddeinfo(servinfo);


    
