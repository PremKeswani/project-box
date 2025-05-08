#ifndef CLIENT_H
#define CLIENT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

void recv_msg(int sockfd, char *msg);
int recv_int(int sockfd);
void write_server_int(int sockfd, int msg);
void error(const char *msg);
int connect_to_server(char *hostname, int portno);
void draw_board(char board[][3]);
void take_turn(int sockfd);
void get_update(int sockfd, char board[][3]);

#endif