#ifndef SERVER_H
#define SERVER_H

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>

extern int player_count;
extern pthread_mutex_t mutexcount;

void error(const char *msg);
void write_client_int(int cli_sockfd, int msg);
void write_clients_msg(int *cli_sockfd, char *msg);
void write_clients_int(int *cli_sockfd, int msg);
int setup_listener(int portno);
int recv_int(int cli_sockfd);
void write_client_msg(int cli_sockfd, char *msg);
void get_clients(int lis_sockfd, int *cli_sockfd);
int get_player_move(int cli_sockfd);
int check_move(char board[][3], int move, int player_id);
void update_board(char board[][3], int move, int player_id);
void draw_board(char board[][3]);
void send_update(int *cli_sockfd, int move, int player_id);
void send_player_count(int cli_sockfd);
int check_board(char board[][3], int last_move);

#endif