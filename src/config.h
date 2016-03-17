#ifndef __HAVE_CONFIG_H__
#define __HAVE_CONFIG_H__

#include "string.h"
#include "assert.h"
#include "helper.h"
#include "key.h"

struct config {
	char *ip;
	char *kad_node_file;
	char *kad_data_dir;
	uint16_t port;
	uint8_t nxnodes;
	uint8_t nynodes;
	uint8_t nkeys;
  struct KeyPair * construction_keypair;
  struct KeyPair * communication_keypair;
  struct KeyPair * routing_keypair;
};

void read_config(char *path, struct config *config);
void free_config(struct config *config);

#endif
