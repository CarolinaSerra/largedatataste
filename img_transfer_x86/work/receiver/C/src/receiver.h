
/* Header file for function receiver in C language
 * Generated by TASTE on 2021-07-29 10:22:26
 * Context Parameters present : NO
 * Provided interfaces : image
 * Required interfaces : 
 * User-defined properties for this function:
  *  |_ Taste::Active_Interfaces = any
  *  |_ Taste::coordinates = 159687 72536 216344 101045
 * DO NOT EDIT THIS FILE, IT WILL BE OVERWRITTEN DURING THE BUILD
 */

#pragma once

#include "dataview-uniq.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __unix__
   #include <stdlib.h>
   #include <stdio.h>
#endif

void receiver_startup(void);

/* Provided interfaces */
void receiver_PI_image( const asn1SccRawData * );

/* Required interfaces */



#ifdef __cplusplus
}
#endif
