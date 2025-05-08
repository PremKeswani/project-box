CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SERVER = server
CLIENT = client

all: $(SERVER) $(CLIENT)

$(SERVER): server.c
	$(CC) $(CFLAGS) -o $(SERVER) server.c

$(CLIENT): client.c
	$(CC) $(CFLAGS) -o $(CLIENT) client.c

clean:
	rm -f $(SERVER) $(CLIENT)

.PHONY: all clean 