CC = gcc
CFLAGS = -Wall -Werror
TARGET = myping

all: $(TARGET)

$(TARGET): ping.c
	$(CC) $(CFLAGS) -o $(TARGET) ping.c

clean:
	rm -f $(TARGET) *.o *~

.PHONY: all clean 