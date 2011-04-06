/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#include "setuppackage.pb-c.h"
void   dummy_setup_package__init
                     (DummySetupPackage         *message)
{
  static DummySetupPackage init_value = DUMMY_SETUP_PACKAGE__INIT;
  *message = init_value;
}
size_t dummy_setup_package__get_packed_size
                     (const DummySetupPackage *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &dummy_setup_package__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dummy_setup_package__pack
                     (const DummySetupPackage *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &dummy_setup_package__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dummy_setup_package__pack_to_buffer
                     (const DummySetupPackage *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &dummy_setup_package__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DummySetupPackage *
       dummy_setup_package__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DummySetupPackage *)
     protobuf_c_message_unpack (&dummy_setup_package__descriptor,
                                allocator, len, data);
}
void   dummy_setup_package__free_unpacked
                     (DummySetupPackage *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &dummy_setup_package__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   routing_table_entry__init
                     (RoutingTableEntry         *message)
{
  static RoutingTableEntry init_value = ROUTING_TABLE_ENTRY__INIT;
  *message = init_value;
}
size_t routing_table_entry__get_packed_size
                     (const RoutingTableEntry *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &routing_table_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t routing_table_entry__pack
                     (const RoutingTableEntry *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &routing_table_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t routing_table_entry__pack_to_buffer
                     (const RoutingTableEntry *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &routing_table_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
RoutingTableEntry *
       routing_table_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (RoutingTableEntry *)
     protobuf_c_message_unpack (&routing_table_entry__descriptor,
                                allocator, len, data);
}
void   routing_table_entry__free_unpacked
                     (RoutingTableEntry *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &routing_table_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   setup_package__init
                     (SetupPackage         *message)
{
  static SetupPackage init_value = SETUP_PACKAGE__INIT;
  *message = init_value;
}
size_t setup_package__get_packed_size
                     (const SetupPackage *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &setup_package__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t setup_package__pack
                     (const SetupPackage *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &setup_package__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t setup_package__pack_to_buffer
                     (const SetupPackage *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &setup_package__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
SetupPackage *
       setup_package__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (SetupPackage *)
     protobuf_c_message_unpack (&setup_package__descriptor,
                                allocator, len, data);
}
void   setup_package__free_unpacked
                     (SetupPackage *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &setup_package__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   setup_array__init
                     (SetupArray         *message)
{
  static SetupArray init_value = SETUP_ARRAY__INIT;
  *message = init_value;
}
size_t setup_array__get_packed_size
                     (const SetupArray *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &setup_array__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t setup_array__pack
                     (const SetupArray *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &setup_array__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t setup_array__pack_to_buffer
                     (const SetupArray *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &setup_array__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
SetupArray *
       setup_array__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (SetupArray *)
     protobuf_c_message_unpack (&setup_array__descriptor,
                                allocator, len, data);
}
void   setup_array__free_unpacked
                     (SetupArray *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &setup_array__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor dummy_setup_package__field_descriptors[3] =
{
  {
    "seed",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(DummySetupPackage, seed),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "size",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_FIXED32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(DummySetupPackage, size),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "flags",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_FIXED32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(DummySetupPackage, flags),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
};
static const unsigned dummy_setup_package__field_indices_by_name[] = {
  2,   /* field[2] = flags */
  0,   /* field[0] = seed */
  1,   /* field[1] = size */
};
static const ProtobufCIntRange dummy_setup_package__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor dummy_setup_package__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "dummy_setup_package",
  "DummySetupPackage",
  "DummySetupPackage",
  "",
  sizeof(DummySetupPackage),
  3,
  dummy_setup_package__field_descriptors,
  dummy_setup_package__field_indices_by_name,
  1,  dummy_setup_package__number_ranges,
  (ProtobufCMessageInit) dummy_setup_package__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor routing_table_entry__field_descriptors[3] =
{
  {
    "ap_adress",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(RoutingTableEntry, ap_adress),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "ip_adresses",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    PROTOBUF_C_OFFSETOF(RoutingTableEntry, n_ip_adresses),
    PROTOBUF_C_OFFSETOF(RoutingTableEntry, ip_adresses),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "ports",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_FIXED32,
    PROTOBUF_C_OFFSETOF(RoutingTableEntry, n_ports),
    PROTOBUF_C_OFFSETOF(RoutingTableEntry, ports),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
};
static const unsigned routing_table_entry__field_indices_by_name[] = {
  0,   /* field[0] = ap_adress */
  1,   /* field[1] = ip_adresses */
  2,   /* field[2] = ports */
};
static const ProtobufCIntRange routing_table_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor routing_table_entry__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "routing_table_entry",
  "RoutingTableEntry",
  "RoutingTableEntry",
  "",
  sizeof(RoutingTableEntry),
  3,
  routing_table_entry__field_descriptors,
  routing_table_entry__field_indices_by_name,
  1,  routing_table_entry__number_ranges,
  (ProtobufCMessageInit) routing_table_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor setup_package__field_descriptors[19] =
{
  {
    "prev_ip",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SetupPackage, prev_ip),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "next_ip",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SetupPackage, next_ip),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "prev_port",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SetupPackage, prev_port),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "next_port",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SetupPackage, next_port),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "prev_id",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SetupPackage, prev_id),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "next_id",
    6,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SetupPackage, next_id),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "prev_communication_certificate_flat",
    7,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SetupPackage, prev_communication_certificate_flat),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "next_communication_certificate_flat",
    8,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SetupPackage, next_communication_certificate_flat),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "construction_certificate_flat",
    9,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SetupPackage, construction_certificate_flat),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "dummies",
    10,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(SetupPackage, n_dummies),
    PROTOBUF_C_OFFSETOF(SetupPackage, dummies),
    &dummy_setup_package__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "nkeys",
    11,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SetupPackage, nkeys),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "key_seed",
    12,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SetupPackage, key_seed),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "replacement_seed",
    13,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SetupPackage, replacement_seed),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "key_salt",
    14,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SetupPackage, key_salt),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "flags",
    15,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SetupPackage, flags),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "hash",
    16,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SetupPackage, hash),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "external_hash",
    17,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SetupPackage, external_hash),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "ap_adress",
    18,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    PROTOBUF_C_OFFSETOF(SetupPackage, has_ap_adress),
    PROTOBUF_C_OFFSETOF(SetupPackage, ap_adress),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
  {
    "rte",
    19,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(SetupPackage, rte),
    &routing_table_entry__descriptor,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
};
static const unsigned setup_package__field_indices_by_name[] = {
  17,   /* field[17] = ap_adress */
  8,   /* field[8] = construction_certificate_flat */
  9,   /* field[9] = dummies */
  16,   /* field[16] = external_hash */
  14,   /* field[14] = flags */
  15,   /* field[15] = hash */
  13,   /* field[13] = key_salt */
  11,   /* field[11] = key_seed */
  7,   /* field[7] = next_communication_certificate_flat */
  5,   /* field[5] = next_id */
  1,   /* field[1] = next_ip */
  3,   /* field[3] = next_port */
  10,   /* field[10] = nkeys */
  6,   /* field[6] = prev_communication_certificate_flat */
  4,   /* field[4] = prev_id */
  0,   /* field[0] = prev_ip */
  2,   /* field[2] = prev_port */
  12,   /* field[12] = replacement_seed */
  18,   /* field[18] = rte */
};
static const ProtobufCIntRange setup_package__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 19 }
};
const ProtobufCMessageDescriptor setup_package__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "setup_package",
  "SetupPackage",
  "SetupPackage",
  "",
  sizeof(SetupPackage),
  19,
  setup_package__field_descriptors,
  setup_package__field_indices_by_name,
  1,  setup_package__number_ranges,
  (ProtobufCMessageInit) setup_package__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor setup_array__field_descriptors[1] =
{
  {
    "slots",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_BYTES,
    PROTOBUF_C_OFFSETOF(SetupArray, n_slots),
    PROTOBUF_C_OFFSETOF(SetupArray, slots),
    NULL,
    NULL,
    NULL,NULL    /* reserved1, reserved2 */
  },
};
static const unsigned setup_array__field_indices_by_name[] = {
  0,   /* field[0] = slots */
};
static const ProtobufCIntRange setup_array__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor setup_array__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "setup_array",
  "SetupArray",
  "SetupArray",
  "",
  sizeof(SetupArray),
  1,
  setup_array__field_descriptors,
  setup_array__field_indices_by_name,
  1,  setup_array__number_ranges,
  (ProtobufCMessageInit) setup_array__init,
  NULL,NULL,NULL    /* reserved[123] */
};
