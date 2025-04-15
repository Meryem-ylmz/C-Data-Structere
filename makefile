CC = gcc
CFLAGS = -Wall -Wextra -std=c99

SRCS = main.c Stack.c Queue.c LinkedList.c
OBJS = $(SRCS:.c=.o)

TARGET = datastructures

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)