CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++11

all: megaphone

megaphone: main.o
	$(CC) $(CFLAGS) main.o -o megaphone

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f megaphone *.o