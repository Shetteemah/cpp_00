CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++11

SRCS = main.cpp phonebook.cpp contact.cpp
OBJS = $(SRCS:.cpp=.o)

PHONEBOOK = phonebook

.PHONY: all clean fclean re

all: $(PHONEBOOK)

$(PHONEBOOK): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(PHONEBOOK)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(PHONEBOOK)

re: fclean all
