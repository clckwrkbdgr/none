CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: none

none: main.o
	$(CC) -o $@ $^

distclean: clean
	$(RM) -f none

clean:
	$(RM) -f main.o
