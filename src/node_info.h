#ifndef __HAVE_NODE_INFO_H__
#define __HAVE_NODE_INFO_H__

#include <stdint.h>
#include "key.h"

struct node_info {
	struct PUBLIC_KEY * construction_key; /* path building key */
	struct PUBLIC_KEY * communication_key; /* communication key */
	char *ip;
	uint16_t port;
	uint32_t flags;
};

#define X_NODE (0x01)
#define Y_NODE (0x02)
#define T_NODE (0x04)
#define ENTRY_NODE (0x08)
#define SUCCESS_FLAG (0x10)
#define RESERVE_AP (0x20)

#endif
