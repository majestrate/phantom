#ifndef __HAVE_ASYMMETRIC_H__
#define __HAVE_ASYMMETRIC_H__
#include "key.h"

int encrypt_asymmetric(struct PUBLIC_KEY * k, uint8_t * out, uint32_t * outlen, const uint8_t * inptr, uint32_t inlen);

uint8_t * encrypt_asymmetric_pack(struct PUBLIC_KEY * k, const uint8_t * inptr, const uint32_t inlen, uint32_t * outlen);

int decrypt_asymmetric(struct SECRET_KEY * k, uint8_t * out, uint32_t * outlen, const uint8_t * inptr, uint32_t inlen);

#endif
