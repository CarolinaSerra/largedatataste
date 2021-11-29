/* Header file for function receiver in C language
 * Generated by TASTE on 2021-11-24 15:50:50
 * Context Parameters present : NO
 * Provided interfaces : a, c, e, g, i, image, k, m, o, q, s, u, w, y
 * Required interfaces : b, d, f, h, j, l, n, p, r, t, testint, v, x, z
 * User-defined properties for this function:
  *  |_ Taste::Active_Interfaces = any
  *  |_ Taste::coordinates = 150827 3320 207484 185045
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
void receiver_a
      (const char *IN_vara, size_t IN_vara_len);

void receiver_c
      (const char *IN_varc, size_t IN_varc_len);

void receiver_e
      (const char *IN_vare, size_t IN_vare_len);

void receiver_g
      (const char *IN_varg, size_t IN_varg_len);

void receiver_i
      (const char *IN_vari, size_t IN_vari_len);

void receiver_image
      (const char *IN_img_data, size_t IN_img_data_len);

void receiver_k
      (const char *IN_vark, size_t IN_vark_len);

void receiver_m
      (const char *IN_varm, size_t IN_varm_len);

void receiver_o
      (const char *IN_varo, size_t IN_varo_len);

void receiver_q
      (const char *IN_varq, size_t IN_varq_len);

void receiver_s
      (const char *IN_vars, size_t IN_vars_len);

void receiver_u
      (const char *IN_varu, size_t IN_varu_len);

void receiver_w
      (const char *IN_varw, size_t IN_varw_len);

void receiver_y
      (const char *IN_vary, size_t IN_vary_len);


#ifdef __cplusplus
}
#endif

