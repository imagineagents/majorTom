/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9 at Mon Jan  1 23:37:06 2018. */

#include "amessage.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t AMessage_fields[3] = {
    PB_FIELD(  1, UINT64  , SINGULAR, STATIC  , FIRST, AMessage, timestamp, timestamp, 0),
    PB_FIELD(  2, DOUBLE  , REPEATED, STATIC  , OTHER, AMessage, data, timestamp, 0),
    PB_LAST_FIELD
};


/* On some platforms (such as AVR), double is really float.
 * These are not directly supported by nanopb, but see example_avr_double.
 * To get rid of this error, remove any double fields from your .proto.
 */
PB_STATIC_ASSERT(sizeof(double) == 8, DOUBLE_MUST_BE_8_BYTES)

/* @@protoc_insertion_point(eof) */
