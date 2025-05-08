CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = scanner

all: $(TARGET)

$(TARGET): scanner.c
	$(CC) $(CFLAGS) -o $(TARGET) scanner.c

clean:
	rm -f $(TARGET)

.PHONY: all clean 