#ifndef CIPHER_H
#define CIPHER_H

char *cipher = {'p', 'l', 'm', 'o', 'k', 'n', 'i', 'j', 'b', 'u', 'h', 'v', 'y', 'g', 'c', 't', 'f', 'x', 'r', 'd', 'z', 'e', 's', 'w', 'a', 'q'};

/* Enciphers the plaintext using the cipher key and returns the ciphertext */
char *encipher(const char *plaintext);

/* Deciphers the ciphertext using the cipher key and returns the plaintext */
char *decipher(const char *ciphertext);

#endif /* CIPHER_H */
