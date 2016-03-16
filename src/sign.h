#ifndef __HAVE_SIGN_H__
#define __HAVE_SIGN_H__
#include "key.h"

int sign_data(uint8_t *sig, const uint8_t *data, size_t len, struct SECRET_KEY* key);

int verify_signed_data(const uint8_t *sig, size_t len, const uint8_t *data, size_t datalen, struct PUBLIC_KEY* key);

#endif
