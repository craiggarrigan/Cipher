#include "cipher.h"
#include <stdio.h>

int main(int argc, char **argv){
	printf("encipher('hello world') => %s\n", encipher("hello world'));
	printf("decipher(encipher('hello world')) => %s\n", decipher(encipher("hello world")));
	return 0;
}
