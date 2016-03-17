#ifndef __HAVE_CONN_H__
#define __HAVE_CONN_H__

struct node_connection;

/* free node connection, closes underlying transport */
/* if conn is null this does nothing */
void free_node_connection(struct * node_connection conn);

/* connect to a remote node given its node info */
/* does handshake and verifies identity */
/* returns null on fail */
struct node_connection * node_connection_connect(struct node_info * info);

/* write data to remote node */
int node_connection_write(struct node_connection * c, const uint8_t * dataptr, const size_t datalen);

/* read data from remote node */
ssize_t node_connection_read(struct node_connection * c, uint8_t * readbuff, size_t readlen);

#endif
