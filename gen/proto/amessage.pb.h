/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9 at Sun Jan 21 00:59:13 2018. */

#ifndef PB_AMESSAGE_PB_H_INCLUDED
#define PB_AMESSAGE_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _AMessage {
    int64_t timestamp;
    pb_size_t data_count;
    double data[16];
    uint32_t validDataIndexes;
/* @@protoc_insertion_point(struct:AMessage) */
} AMessage;

/* Default values for struct fields */

/* Initializer values for message structs */
#define AMessage_init_default                    {0, 0, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 0}
#define AMessage_init_zero                       {0, 0, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 0}

/* Field tags (for use in manual encoding/decoding) */
#define AMessage_timestamp_tag                   1
#define AMessage_data_tag                        2
#define AMessage_validDataIndexes_tag            3

/* Struct field encoding specification for nanopb */
extern const pb_field_t AMessage_fields[4];

/* Maximum encoded size of messages (where known) */
#define AMessage_size                            160

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define AMESSAGE_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
