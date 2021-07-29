#ifndef __OCARINA_GENERATED_MARSHALLERS_H_
#define __OCARINA_GENERATED_MARSHALLERS_H_ 
#include <types.h>
#include <po_hi_messages.h>
#include <po_hi_types.h>
#include <request.h>
/**************************************************** */

/*  This file was automatically generated by Ocarina  */

/*  Working Copy from ra3c95420 */

/*  Do NOT hand-modify this file, as your             */

/*  changes will be lost when you re-run Ocarina      */

/**************************************************** */

void __po_hi_marshall_type_taste_protected_object 
    (process_package__taste_protected_object value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_type_taste_protected_object 
    (process_package__taste_protected_object* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_type_rawdata_buffer_impl 
    (dataview__rawdata_buffer_impl value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_type_rawdata_buffer_impl 
    (dataview__rawdata_buffer_impl* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_type_rawdata_buffer_max_impl 
    (dataview__rawdata_buffer_max_impl value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_type_rawdata_buffer_max_impl 
    (dataview__rawdata_buffer_max_impl* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_type_stream_element_buffer 
    (dataview__stream_element_buffer value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_type_stream_element_buffer 
    (dataview__stream_element_buffer* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_type_unsigned_32 
    (base_types__unsigned_32 value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_type_unsigned_32 
    (base_types__unsigned_32* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request_receiver_image_inport_image 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_request_receiver_image_inport_image 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request_sender_trigger_outport_receiver_image 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_request_sender_trigger_outport_receiver_image 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message);

void __po_hi_unmarshall_request 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message);

#endif
