#ifndef __OCARINA_GENERATED_ACTIVITY_H_
#define __OCARINA_GENERATED_ACTIVITY_H_ 
#include <request.h>
/**************************************************** */

/*  This file was automatically generated by Ocarina  */

/*  Working Copy from r5322d723 */

/*  Do NOT hand-modify this file, as your             */

/*  changes will be lost when you re-run Ocarina      */

/**************************************************** */

void receiver_image_deliver 
    (__po_hi_request_t* request);

void* receiver_image_job (void);

void sender_trigger_deliver 
    (__po_hi_request_t* request);

void* sender_trigger_job (void);

void __po_hi_main_deliver 
    (__po_hi_request_t* request);

#endif
