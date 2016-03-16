#ifndef __HAVE_KEY_H__
#define __HAVE_KEY_H__

#include <stdint.h>

#define SECRET_KEY_LEN 32
#define PUBLIC_KEY_LEN 32

struct SECRET_KEY;

struct SECRET_KEY * SECRET_KEY_new();
void SECRET_KEY_free(struct SECRET_KEY * k);

int SECRET_KEY_set_CURVE25519(struct SECRET_KEY * k, const uint8_t * keydata);

struct PUBLIC_KEY;

struct PUBLIC_KEY * PUBLIC_KEY_new();
void PUBLIC_KEY_free(struct PUBLIC_KEY * k);

#endif
