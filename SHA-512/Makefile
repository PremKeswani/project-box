CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = sha512

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

clean:
	rm -f $(TARGET)

.PHONY: all clean 