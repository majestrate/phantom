#ifndef __HAVE_HASH_H__
#define __HAVE_HASH_H__
#ifdef CRYPTO_HASH_USE_BLAKE2
#include "blake2.h"
#define CRYPTO_DIGEST_LENGTH BLAKE2_DIGEST_LENGTH
#define cryptohash BLAKE2
#else
#include <openssl/sha.h>
#define CRYPTO_DIGEST_LENGTH SHA_DIGEST_LENGTH
#define cryptohash SHA1
#endif
#endif
