/* Header file for function receiver in C language
 * Generated by TASTE on 2021-07-29 10:21:38
 * Context Parameters present : NO
 * Provided interfaces : image
 * Required interfaces : 
 * User-defined properties for this function:
  *  |_ Taste::Active_Interfaces = any
  *  |_ Taste::coordinates = 159687 72536 216344 101045
 * DO NOT EDIT THIS FILE, IT WILL BE OVERWRITTEN DURING THE BUILD
 */

/* The purpose of this file is to provide a wrapper around the user code,
 * with a single interface that is independent of the implementation language
 * of the function. The parameters of each PI are blackboxes encoded
 * in the form specified in the interface view (Native, uPER, or ACN)
*/

#pragma once
#if defined(__unix__) || defined (__MSP430__)
   #include <stdlib.h>
   #include <stdio.h>
#else
   typedef unsigned size_t;
#endif

#ifdef __cplusplus
extern "C" {
#endif

#include "receiver.h"

// Function initialization - calls user startup code of all dependent functions
void init_receiver(void);


/* Provided interfaces */
void receiver_image
      (const char *IN_img_data, size_t IN_img_data_len);


#ifdef __cplusplus
}
#endif

