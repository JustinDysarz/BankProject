CC=gcc
CFLAGS=-g -O3 -Wall

all: Bank

Bank: Main.c LinkedList.o
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -f Bank *.o
