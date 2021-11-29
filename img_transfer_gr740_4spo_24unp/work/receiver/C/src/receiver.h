
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
void receiver_PI_a( const asn1SccMyInteger * );
void receiver_PI_c( const asn1SccMyInteger * );
void receiver_PI_e( const asn1SccMyInteger * );
void receiver_PI_g( const asn1SccMyInteger * );
void receiver_PI_i( const asn1SccMyInteger * );
void receiver_PI_image( const asn1SccRawData * );
void receiver_PI_k( const asn1SccMyInteger * );
void receiver_PI_m( const asn1SccMyInteger * );
void receiver_PI_o( const asn1SccMyInteger * );
void receiver_PI_q( const asn1SccMyInteger * );
void receiver_PI_s( const asn1SccMyInteger * );
void receiver_PI_u( const asn1SccMyInteger * );
void receiver_PI_w( const asn1SccMyInteger * );
void receiver_PI_y( const asn1SccMyInteger * );

/* Required interfaces */
extern void receiver_RI_b( const asn1SccMyInteger * );
extern void receiver_RI_d( const asn1SccMyInteger * );
extern void receiver_RI_f( const asn1SccMyInteger * );
extern void receiver_RI_h( const asn1SccMyInteger * );
extern void receiver_RI_j( const asn1SccMyInteger * );
extern void receiver_RI_l( const asn1SccMyInteger * );
extern void receiver_RI_n( const asn1SccMyInteger * );
extern void receiver_RI_p( const asn1SccMyInteger * );
extern void receiver_RI_r( const asn1SccMyInteger * );
extern void receiver_RI_t( const asn1SccMyInteger * );
extern void receiver_RI_testint( const asn1SccMyInteger * );
extern void receiver_RI_v( const asn1SccMyInteger * );
extern void receiver_RI_x( const asn1SccMyInteger * );
extern void receiver_RI_z( const asn1SccMyInteger * );


#ifdef __cplusplus
}
#endif
