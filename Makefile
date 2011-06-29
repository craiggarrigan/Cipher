CC = gcc -Wall -Wextra

all: cipher

cipher: cipher.c cipher.h
	$(CC) -o cipher cipher.c cipher.h
