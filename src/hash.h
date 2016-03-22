#ifndef __HAVE_HASH_H__
#define __HAVE_HASH_H__

#include <openssl/sha.h>
#define CRYPTO_DIGEST_LENGTH SHA512_DIGEST_LENGTH
#define cryptohash SHA512
#define EVP_cryptohash EVP_sha512


#endif
