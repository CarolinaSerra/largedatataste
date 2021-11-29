/* Header file for function sender in C language
 * Generated by TASTE on 2021-11-24 15:50:50
 * Context Parameters present : NO
 * Provided interfaces : b, d, f, h, j, l, n, p, r, t, testint, trigger, v, x, z
 * Required interfaces : a, c, e, g, i, image, k, m, o, q, s, u, w, y
 * User-defined properties for this function:
  *  |_ Taste::Active_Interfaces = any
  *  |_ Taste::coordinates = 73619 3500 114759 183955
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
void sender_b
      (const char *IN_varb, size_t IN_varb_len);

void sender_d
      (const char *IN_vard, size_t IN_vard_len);

void sender_f
      (const char *IN_varf, size_t IN_varf_len);

void sender_h
      (const char *IN_varh, size_t IN_varh_len);

void sender_j
      (const char *IN_j, size_t IN_j_len);

void sender_l
      (const char *IN_varl, size_t IN_varl_len);

void sender_n
      (const char *IN_varn, size_t IN_varn_len);

void sender_p
      (const char *IN_varp, size_t IN_varp_len);

void sender_r
      (const char *IN_varr, size_t IN_varr_len);

void sender_t
      (const char *IN_vart, size_t IN_vart_len);

void sender_testint
      (const char *IN_int2, size_t IN_int2_len);

void sender_trigger(void);
void sender_v
      (const char *IN_varv, size_t IN_varv_len);

void sender_x
      (const char *IN_varx, size_t IN_varx_len);

void sender_z
      (const char *IN_varz, size_t IN_varz_len);


#ifdef __cplusplus
}
#endif
