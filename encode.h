#ifndef _ENCODE_H_
#define _ENCODE_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct frp_encoder {
	char 	*key;
	ushort 	key_len;
	char 	*salt;
	char 	*iv;
	char 	*privilege_token;
};

char *encrypt_key(const char *token, size_t token_len, const char *salt);
char *encrypt_data(char *src_data, size_t srlen);
struct frp_encoder *new_encoder(const char *privilege_token, const char *salt);

#endif // _ENCODE_H_