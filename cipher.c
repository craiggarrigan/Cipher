#include "cipher.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char **argv){
	printf("encipher('hello world') => %s\n", encipher("hello world"));
	printf("decipher(encipher('hello world')) => %s\n", decipher(encipher("hello world")));
	return 0;
}

char *encipher(const char *plaintext){
	char *ciphertext = malloc(strlen(plaintext) + 1);
	if(ciphertext == NULL)
		return NULL;
	// Apply cipher
	unsigned i;
	for(i = 0; i < strlen(plaintext); i++){
		// Only substitute alphabetic chars
		if(isalpha(plaintext[i])){
			// Work out the correct character from the cipher to use
			ciphertext[i] = cipher[tolower(plaintext[i]) - 'a'];
		} else {
			ciphertext[i] = plaintext[i];
		}
	}
	
	return ciphertext;
}

char *decipher(const char *ciphertext){
	return "DUMMY";
}
