
/* Header file for function sender in C language
 * Generated by TASTE on 2021-08-13 16:24:14
 * Context Parameters present : NO
 * Provided interfaces : trigger
 * Required interfaces : image
 * User-defined properties for this function:
  *  |_ Taste::Active_Interfaces = any
  *  |_ Taste::coordinates = 89677 72716 130817 101406
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

void sender_startup(void);

/* Provided interfaces */
void sender_PI_trigger( void );

/* Required interfaces */
extern void sender_RI_image( const asn1SccRawData * );


#ifdef __cplusplus
}
#endif
