#ifndef __HAVE_KEY_H__
#define __HAVE_KEY_H__

#include <stdint.h>

struct SECRET_KEY;

struct SECRET_KEY * SECRET_KEY_new();
void SECRET_KEY_free(struct SECRET_KEY * k);

int SECRET_KEY_set_CURVE25519(struct SECRET_KEY * k, const uint8_t * keydata, uint32_t keylen);

uint32_t SECRET_KEY_get_len(struct SECRET_KEY * k);

struct SECRET_KEY * SECRET_KEY_clone(struct SECRET_KEY * k);

struct PUBLIC_KEY;

struct PUBLIC_KEY * PUBLIC_KEY_new();
void PUBLIC_KEY_free(struct PUBLIC_KEY * k);

int PUBLIC_KEY_set_CURVE25519(struct PUBLIC_KEY * k, const uint8_t * keydata, uint32_t keylen);

uint32_t PUBLIC_KEY_get_len(struct PUBLIC_KEY * k);

uint8_t * PUBLIC_KEY_data(struct PUBLIC_KEY * k);

struct PUBLIC_KEY * PUBLIC_KEY_clone(struct PUBLIC_KEY * k);

struct PUBLIC_KEY * PUBLIC_KEY_copy(const uint8_t * keydata, uint32_t keylen);

int PUBLIC_KEY_equals(struct PUBLIC_KEY * k1, struct PUBLIC_KEY * k2);

struct KeyPair;

struct KeyPair * KeyPair_new();
void KeyPair_free(struct KeyPair * k);

void KeyPair_seed_CURVE25519(struct SECRET_KEY * k);

struct PUBLIC_KEY * KeyPair_get_public_key(struct KeyPair * k);
struct SECRET_KEY * KeyPair_get_secret_key(struct KeyPair * k);

struct KeyPair * KeyPair_gen();

uint32_t KeyPair_get_public_key_length(struct KeyPair * k);
uint8_t * KeyPair_get_public_key_data(struct KeyPair * k);

#endif
