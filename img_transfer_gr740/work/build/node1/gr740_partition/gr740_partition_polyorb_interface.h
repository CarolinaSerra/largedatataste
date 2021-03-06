/* File generated by kazoo for TASTE - do not edit */
#include <stddef.h>

// Include PolyORB-HI-C header files:
#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "po_hi_gqueue.h"
#include "activity.h"
#include "po_hi_task.h"
#include "po_hi_protected.h"


// Protected provided interfaces of function receiver

   extern void receiver_image(const char *IN_buf_img_data, size_t size_IN_buf_img_data);
   void pro_receiver_image(const char *IN_buf_img_data, size_t size_IN_buf_img_data);

// End of the protected provided interfaces of function receiver

// Protected provided interfaces of function sender


// End of the protected provided interfaces of function sender

// Required interfaces of function sender

// Required interface image in function sender
// This RI is connected to: receiver
void vm_sender_image
        (const char *IN_buf_img_data, size_t size_IN_buf_img_data);


// End of the required interfaces of function sender


void call_receiver_image (__po_hi_task_id, dataview__rawdata_buffer_impl *);


void call_sender_trigger (__po_hi_task_id);


