/* Header file for function sender in C language
 * Generated by TASTE on 2021-08-13 10:17:34
 * Context Parameters present : NO
 * Provided interfaces : trigger
 * Required interfaces : image
 * User-defined properties for this function:
  *  |_ Taste::Active_Interfaces = any
  *  |_ Taste::coordinates = 89677 72716 130817 101406
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

#include "sender.h"

// Function initialization - calls user startup code of all dependent functions
void init_sender(void);


/* Provided interfaces */
void sender_trigger(void);


#ifdef __cplusplus
}
#endif

