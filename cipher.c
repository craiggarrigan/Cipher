#include "cipher.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char **argv){
	if(argc != 2) return 0;
	printf("encipher(%s) => %s\n", argv[1], encipher(argv[1]));
	printf("decipher(%s) => %s\n", encipher(argv[1]), decipher(encipher(argv[1])));
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
			ciphertext[i] = lookupChar(plaintext[i]);
		} else {
			ciphertext[i] = plaintext[i];
		}
	}
	
	ciphertext[i] = '\0';
	
	return ciphertext;
}

char *decipher(const char *ciphertext){
	char *plaintext = malloc(strlen(ciphertext) + 1);
	if(plaintext == NULL)
		return NULL;
	unsigned i;
	for(i = 0; i < strlen(ciphertext); i++){
		if(isalpha(ciphertext[i])){
			plaintext[i] = reverseLookupChar(ciphertext[i]);
		} else {
			plaintext[i] = ciphertext[i];
		}
	}
	
	plaintext[i] = '\0';
	
	return plaintext;
}

char lookupChar(char c){
	return cipher[tolower(c) - 'a'];
}

char reverseLookupChar(char c){
	c = tolower(c);
	unsigned i = 0;
	while(cipher[i] != c){
		i++;
	}
	return 'a' + i;
}
