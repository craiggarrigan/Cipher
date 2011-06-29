#ifndef CIPHER_H
#define CIPHER_H

char cipher[] = {'p', 'l', 'm', 'o', 'k', 'n', 'i', 'j', 'b', 'u', 'h', 'v', 'y', 'g', 'c', 't', 'f', 'x', 'r', 'd', 'z', 'e', 's', 'w', 'a', 'q'};

/* Enciphers the plaintext using the cipher key and returns the ciphertext */
char *encipher(const char *plaintext);

/* Deciphers the ciphertext using the cipher key and returns the plaintext */
char *decipher(const char *ciphertext);

/* Takes a plaintext character c and returns the substitution character from the cipher key */
char lookupChar(char c);

/* Takes a ciphertext character c and returns the character it substitutes from the cipher key */
char reverseLookupChar(char c);

#endif /* CIPHER_H */
