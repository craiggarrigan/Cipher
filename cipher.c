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
