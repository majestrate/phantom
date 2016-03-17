#ifndef __HAVE_PATH_H__
#define __HAVE_PATH_H__

#include <assert.h>
#include <math.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include "node_info.h"
#include "netdb.h"
#include "config.h"
#include "helper.h"
#include "x509_flat.h"
#include "conn_ctx.h"
#include "rc4rand.h"
#include "setuppackage.pb-c.h"
#include "cleanup_stack.h"
#include "hash.h"
#include "key.h"
#include "symmetric.h"

#define MAX_DUMMIES 3
#define MIN_DUMMIES 1
#define DUMMY_INSERT (0x1)
#define DUMMY_DELETE (0x2)

struct dummy_package {
	uint32_t size;
	uint8_t seed[SYMMETRIC_CIPHER_KEY_LEN];
};

struct setup_package {
	uint8_t prev_id[CRYPTO_DIGEST_LENGTH];
	uint8_t old_prev_id[CRYPTO_DIGEST_LENGTH];
	uint8_t next_id[CRYPTO_DIGEST_LENGTH];
	char *prev_ip;
	char *next_ip;
  struct PUBLIC_KEY *prev_communication_key;
  struct PUBLIC_KEY *next_communication_key;
  struct PUBLIC_KEY *construction_key;
	uint16_t next_port;
	uint16_t prev_port;
	uint32_t flags;
	uint8_t nkeys;
	uint8_t startkey[SYMMETRIC_CIPHER_KEY_LEN];
	uint8_t salt[SYMMETRIC_CIPHER_KEY_LEN];
	uint8_t replaceseed[SYMMETRIC_CIPHER_KEY_LEN];
	int ndummies;
	struct dummy_package *dummies;
};

struct setup_path {
	struct node_info *nodes;
	uint8_t nxnodes;
	uint8_t nynodes;
	uint8_t nnodes;
	uint32_t *sizes;
	uint8_t **contents;
	struct setup_package *sps;
	uint8_t endhash[CRYPTO_DIGEST_LENGTH];
	uint32_t entrypath;
	struct node_connection *conn;
	/* is_reverse_path == 1 if we start with many y nodes */
	int is_reverse_path;
	int reserve_ap_adress;
	char *entry_ip;
	struct in6_addr ap;
  struct KeyPair * construction_keypair;
  struct PUBLIC_KEY * routing_key;
};

struct path {
	uint8_t nkeys;
	int is_entrypath;
	struct in6_addr ap;
	struct xkeys **xkeys;
	struct node_connection *conn;
	uint8_t peer_id[CRYPTO_DIGEST_LENGTH];
	char *peer_ip;
	uint16_t peer_port;
};

struct path *construct_entry_path(const struct config *config);
struct path *construct_exit_path(const struct config *config);
struct path *construct_reserve_ap_path(const struct config *config);
void free_path(struct path *path);
uint8_t *handle_first_round_setup_array(const struct config *config, const uint8_t *sa, int sa_len, const uint8_t *id, const char *from_ip, struct conn_ctx *conn, uint32_t *outsize);
uint8_t *handle_second_round_setup_array(const struct config *config, const uint8_t *sa, int sa_len, const uint8_t *id, const struct conn_ctx *oldconn, struct conn_ctx *conn, uint32_t *outsize);
#endif
