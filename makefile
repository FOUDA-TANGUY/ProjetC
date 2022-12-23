CC = gcc
EXEC = programme

executable :
	$(CC) *.c -o $(EXEC) -Wall -Wextra -Werror
	