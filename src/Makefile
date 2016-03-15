PROTO_SRCS := $(wildcard *.proto)
PROTO_OBJS := $(PROTO_SRCS:.proto=.pb-c.o)
PROTO_GENS := $(PROTO_SRCS:.proto=.pb-c.c)
PROTO_HDRS := $(PROTO_SRCS:.proto=.pb-c.h)
SOURCES=helper.c netdb.c path.c x509_flat.c config.c server.c conn_ctx.c logger.c openssl_locking.c rc4rand.c tunnel.c kademlia.c diskcache.c kademlia_rpc.c kad_contacts.c main.c thread_pool.c tun.c drop_privs.c addr.c measure.c
OBJECTS=$(SOURCES:.c=.o)
OBJECTSD=phantomd.o
CC=clang
CFLAGS=-O0 -g -pipe -D_POSIX_C_SOURCE=200112L -I/usr/include/libxml2 -Wall -Werror -Wextra -Wbad-function-cast -Wcast-qual -Wdeclaration-after-statement -Wmissing-prototypes -Wpointer-arith -Wshadow -Wstrict-prototypes -Wformat -Wformat-security -Wunused -Wwrite-strings -Waggregate-return -pedantic -Wuninitialized -fstack-protector-all
LIBS=-lcrypto -lssl -lxml2 -lrt -lpthread -lprotobuf-c
#LIBS=-lcrypto -lssl -lxml2 -lrt -lpthread -lprotobuf-c -I../lssl/openssl-1.0.0 L../lssl/openssl-1.0.0
BINARY=phantom
BINARYD=phantomd

.PRECIOUS: $(PROTOBUF_GEN)

all: $(BINARY) $(BINARYD)

$(BINARYD): $(OBJECTSD)
	$(CC) -o $(BINARYD) $(OBJECTSD) $(CFLAGS)

%.pb-c.c: %.proto
	protoc-c --c_out=. $<

%.pb-c.o: %.pb-c.c
	$(CC) $(CFLAGS) -c -o $@ $<

%.o: %.pb-c.o


$(OBJECTS): $(PROTO_GENS) $(PROTO_OBJS)

$(BINARY): $(OBJECTS)
	$(CC) -o $(BINARY) $(OBJECTS) $(PROTO_OBJS) $(CFLAGS) $(LIBS)

indent:
	#modeled after /usr/src/linux/scripts/Lindent
	SIMPLE_BACKUP_SUFFIX=.b4indent indent -kr -i8 -ts8 -sob -l80 -ss -bs -psl -cli8 *.c

clean:
	rm -f $(OBJECTS) $(PROTO_OBJS) $(PROTO_GENS) $(PROTO_HDRS) $(BINARY) $(BINARYD) $(OBJECTSD) *.c.b4indent *.log *.plist

efence: $(OBJECTS) $(PROTO_OBJS)
	$(CC) -o $(BINARY) $(OBJECTS) $(PROTO_OBJS) $(CFLAGS) $(LIBS) -lefence

tags:
	ctags -R

analyze:
	for i in $(OBJECTS) $(OBJECTSD); do j=`basename $$i .o`; echo "Checking $$j..."; clang --analyze $(CFLAGS) $$j.c; rm -f $$j.plist; done

.PHONY: clean indent efence analyze tags
