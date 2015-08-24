#ifndef _statserve_net_h
#define _statserve_net_h

#include <netdb.h>

#define BACKLOG 10

int nonblock(int fd);

int read_some(RingBuffer * buffer, int fd, int is_socket);

int write_some(RingBuffer * buffer, int fd, int is_socket);

int attempt_listen(struct addrinfo *info);

int server_listen(const char *host, const char *port);

#endif