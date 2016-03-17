#ifndef __HAVE_SYMMETRIC_H__
#define __HAVE_SYMMETRIC_H__

#define SYMMETRIC_CIPHER_KEY_LEN 64
#define SYMMETRIC_CIPHER_BLOCK_SIZE 16
#define SYMMETRIC_CIPHER_IV_LEN 16

/* do symmetric encryption */
int encrypt_symmetric(const uint8_t * key, const uint8_t * iv, uint8_t * outptr, uint32_t * outlen, const uint8_t * inptr, uint32_t inlen);

/* do symmetric decryption */
int decrypt_symmetric(const uint8_t * key, const uint8_t * iv, uint8_t * outptr, uint32_t * outlen, const uint8_t * inptr, uint32_t inlen);

/* do symmetric encryption, generate and prepend iv/nonce */
/* return allocated buffer containing encrypted data */
uint8_t * encrypt_symmetric_pack(const uint8_t * dataptr, const uint32_t datalen, const uint8_t * key, uint32_t * outlen);

/* do symmetric decryption, use prepended iv/nonce */
int decrypt_symmetric_unpack(uint8_t * out, uint32_t * outlen, const uint8_t * dataptr, const uint32_t datalen, const uint8_t * key);

#endif
