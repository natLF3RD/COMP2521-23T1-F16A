CC = clang
CFLAGS = -Wall -Werror -g -fsanitize=address,leak,undefined

all: recurse iterate

recurse: main.o recurse.o
	$(CC) $(CFLAGS) -o recurse main.o recurse.o
iterate: main.o iterate.o
	$(CC) $(CFLAGS) -o iterate main.o iterate.o

# Object creation rules
recurse.o: linkedlist.h recurse.c
iterate.o: linkedlist.h iterate.c
# rule for the file containing main
main.o: linkedlist.h main.c

# rule to run "make clean" 
# effectively to delete everything that's built
.PHONY: clean
clean:
	rm -f recurse iterate *.o

