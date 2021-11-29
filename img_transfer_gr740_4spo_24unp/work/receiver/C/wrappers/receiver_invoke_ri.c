// Implementation of the glue code in C handling required interfaces

#include <stdlib.h>
#ifdef __unix__
   #include <stdio.h>
   #include "PrintTypesAsASN1.h"
   #include "timeInMS.h"
#endif
#include "C_ASN1_Types.h"
#include "dataview-uniq.h"

extern unsigned receiver_initialized;

void receiver_RI_b
      (const asn1SccMyInteger *IN_varb);
void receiver_RI_b
      (const asn1SccMyInteger *IN_varb)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to sender (corresponding PI: b)
         printf ("INNER_RI: receiver,sender,b,b,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_receiver_b
     (void *, size_t);

   vm_receiver_b
     ((void *)IN_varb, sizeof(asn1SccMyInteger));


}
void receiver_RI_d
      (const asn1SccMyInteger *IN_vard);
void receiver_RI_d
      (const asn1SccMyInteger *IN_vard)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to sender (corresponding PI: d)
         printf ("INNER_RI: receiver,sender,d,d,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_receiver_d
     (void *, size_t);

   vm_receiver_d
     ((void *)IN_vard, sizeof(asn1SccMyInteger));


}
void receiver_RI_f
      (const asn1SccMyInteger *IN_varf);
void receiver_RI_f
      (const asn1SccMyInteger *IN_varf)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to sender (corresponding PI: f)
         printf ("INNER_RI: receiver,sender,f,f,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_receiver_f
     (void *, size_t);

   vm_receiver_f
     ((void *)IN_varf, sizeof(asn1SccMyInteger));


}
void receiver_RI_h
      (const asn1SccMyInteger *IN_varh);
void receiver_RI_h
      (const asn1SccMyInteger *IN_varh)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to sender (corresponding PI: h)
         printf ("INNER_RI: receiver,sender,h,h,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_receiver_h
     (void *, size_t);

   vm_receiver_h
     ((void *)IN_varh, sizeof(asn1SccMyInteger));


}
void receiver_RI_j
      (const asn1SccMyInteger *IN_j);
void receiver_RI_j
      (const asn1SccMyInteger *IN_j)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to sender (corresponding PI: j)
         printf ("INNER_RI: receiver,sender,j,j,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_receiver_j
     (void *, size_t);

   vm_receiver_j
     ((void *)IN_j, sizeof(asn1SccMyInteger));


}
void receiver_RI_l
      (const asn1SccMyInteger *IN_varl);
void receiver_RI_l
      (const asn1SccMyInteger *IN_varl)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to sender (corresponding PI: l)
         printf ("INNER_RI: receiver,sender,l,l,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_receiver_l
     (void *, size_t);

   vm_receiver_l
     ((void *)IN_varl, sizeof(asn1SccMyInteger));


}
void receiver_RI_n
      (const asn1SccMyInteger *IN_varn);
void receiver_RI_n
      (const asn1SccMyInteger *IN_varn)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to sender (corresponding PI: n)
         printf ("INNER_RI: receiver,sender,n,n,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_receiver_n
     (void *, size_t);

   vm_receiver_n
     ((void *)IN_varn, sizeof(asn1SccMyInteger));


}
void receiver_RI_p
      (const asn1SccMyInteger *IN_varp);
void receiver_RI_p
      (const asn1SccMyInteger *IN_varp)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to sender (corresponding PI: p)
         printf ("INNER_RI: receiver,sender,p,p,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_receiver_p
     (void *, size_t);

   vm_receiver_p
     ((void *)IN_varp, sizeof(asn1SccMyInteger));


}
void receiver_RI_r
      (const asn1SccMyInteger *IN_varr);
void receiver_RI_r
      (const asn1SccMyInteger *IN_varr)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to sender (corresponding PI: r)
         printf ("INNER_RI: receiver,sender,r,r,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_receiver_r
     (void *, size_t);

   vm_receiver_r
     ((void *)IN_varr, sizeof(asn1SccMyInteger));


}
void receiver_RI_t
      (const asn1SccMyInteger *IN_vart);
void receiver_RI_t
      (const asn1SccMyInteger *IN_vart)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to sender (corresponding PI: t)
         printf ("INNER_RI: receiver,sender,t,t,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_receiver_t
     (void *, size_t);

   vm_receiver_t
     ((void *)IN_vart, sizeof(asn1SccMyInteger));


}
void receiver_RI_testint
      (const asn1SccMyInteger *IN_int2);
void receiver_RI_testint
      (const asn1SccMyInteger *IN_int2)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to sender (corresponding PI: testint)
         printf ("INNER_RI: receiver,sender,testint,testint,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_receiver_testint
     (void *, size_t);

   vm_receiver_testint
     ((void *)IN_int2, sizeof(asn1SccMyInteger));


}
void receiver_RI_v
      (const asn1SccMyInteger *IN_varv);
void receiver_RI_v
      (const asn1SccMyInteger *IN_varv)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to sender (corresponding PI: v)
         printf ("INNER_RI: receiver,sender,v,v,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_receiver_v
     (void *, size_t);

   vm_receiver_v
     ((void *)IN_varv, sizeof(asn1SccMyInteger));


}
void receiver_RI_x
      (const asn1SccMyInteger *IN_varx);
void receiver_RI_x
      (const asn1SccMyInteger *IN_varx)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to sender (corresponding PI: x)
         printf ("INNER_RI: receiver,sender,x,x,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_receiver_x
     (void *, size_t);

   vm_receiver_x
     ((void *)IN_varx, sizeof(asn1SccMyInteger));


}
void receiver_RI_z
      (const asn1SccMyInteger *IN_varz);
void receiver_RI_z
      (const asn1SccMyInteger *IN_varz)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to sender (corresponding PI: z)
         printf ("INNER_RI: receiver,sender,z,z,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_receiver_z
     (void *, size_t);

   vm_receiver_z
     ((void *)IN_varz, sizeof(asn1SccMyInteger));


}

