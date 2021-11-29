// Implementation of the glue code in C handling required interfaces

#include <stdlib.h>
#ifdef __unix__
   #include <stdio.h>
   #include "PrintTypesAsASN1.h"
   #include "timeInMS.h"
#endif
#include "C_ASN1_Types.h"
#include "dataview-uniq.h"

extern unsigned sender_initialized;

void sender_RI_a
      (const asn1SccMyInteger *IN_vara);
void sender_RI_a
      (const asn1SccMyInteger *IN_vara)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to receiver (corresponding PI: a)
         printf ("INNER_RI: sender,receiver,a,a,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_sender_a
     (void *, size_t);

   vm_sender_a
     ((void *)IN_vara, sizeof(asn1SccMyInteger));


}
void sender_RI_c
      (const asn1SccMyInteger *IN_varc);
void sender_RI_c
      (const asn1SccMyInteger *IN_varc)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to receiver (corresponding PI: c)
         printf ("INNER_RI: sender,receiver,c,c,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_sender_c
     (void *, size_t);

   vm_sender_c
     ((void *)IN_varc, sizeof(asn1SccMyInteger));


}
void sender_RI_e
      (const asn1SccMyInteger *IN_vare);
void sender_RI_e
      (const asn1SccMyInteger *IN_vare)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to receiver (corresponding PI: e)
         printf ("INNER_RI: sender,receiver,e,e,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_sender_e
     (void *, size_t);

   vm_sender_e
     ((void *)IN_vare, sizeof(asn1SccMyInteger));


}
void sender_RI_g
      (const asn1SccMyInteger *IN_varg);
void sender_RI_g
      (const asn1SccMyInteger *IN_varg)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to receiver (corresponding PI: g)
         printf ("INNER_RI: sender,receiver,g,g,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_sender_g
     (void *, size_t);

   vm_sender_g
     ((void *)IN_varg, sizeof(asn1SccMyInteger));


}
void sender_RI_i
      (const asn1SccMyInteger *IN_vari);
void sender_RI_i
      (const asn1SccMyInteger *IN_vari)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to receiver (corresponding PI: i)
         printf ("INNER_RI: sender,receiver,i,i,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_sender_i
     (void *, size_t);

   vm_sender_i
     ((void *)IN_vari, sizeof(asn1SccMyInteger));


}
void sender_RI_image
      (const asn1SccRawData *IN_img_data);
void sender_RI_image
      (const asn1SccRawData *IN_img_data)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to receiver (corresponding PI: image)
         printf ("INNER_RI: sender,receiver,image,image,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_sender_image
     (void *, size_t);

   vm_sender_image
     ((void *)IN_img_data, sizeof(asn1SccRawData));


}
void sender_RI_k
      (const asn1SccMyInteger *IN_vark);
void sender_RI_k
      (const asn1SccMyInteger *IN_vark)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to receiver (corresponding PI: k)
         printf ("INNER_RI: sender,receiver,k,k,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_sender_k
     (void *, size_t);

   vm_sender_k
     ((void *)IN_vark, sizeof(asn1SccMyInteger));


}
void sender_RI_m
      (const asn1SccMyInteger *IN_varm);
void sender_RI_m
      (const asn1SccMyInteger *IN_varm)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to receiver (corresponding PI: m)
         printf ("INNER_RI: sender,receiver,m,m,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_sender_m
     (void *, size_t);

   vm_sender_m
     ((void *)IN_varm, sizeof(asn1SccMyInteger));


}
void sender_RI_o
      (const asn1SccMyInteger *IN_varo);
void sender_RI_o
      (const asn1SccMyInteger *IN_varo)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to receiver (corresponding PI: o)
         printf ("INNER_RI: sender,receiver,o,o,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_sender_o
     (void *, size_t);

   vm_sender_o
     ((void *)IN_varo, sizeof(asn1SccMyInteger));


}
void sender_RI_q
      (const asn1SccMyInteger *IN_varq);
void sender_RI_q
      (const asn1SccMyInteger *IN_varq)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to receiver (corresponding PI: q)
         printf ("INNER_RI: sender,receiver,q,q,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_sender_q
     (void *, size_t);

   vm_sender_q
     ((void *)IN_varq, sizeof(asn1SccMyInteger));


}
void sender_RI_s
      (const asn1SccMyInteger *IN_vars);
void sender_RI_s
      (const asn1SccMyInteger *IN_vars)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to receiver (corresponding PI: s)
         printf ("INNER_RI: sender,receiver,s,s,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_sender_s
     (void *, size_t);

   vm_sender_s
     ((void *)IN_vars, sizeof(asn1SccMyInteger));


}
void sender_RI_u
      (const asn1SccMyInteger *IN_varu);
void sender_RI_u
      (const asn1SccMyInteger *IN_varu)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to receiver (corresponding PI: u)
         printf ("INNER_RI: sender,receiver,u,u,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_sender_u
     (void *, size_t);

   vm_sender_u
     ((void *)IN_varu, sizeof(asn1SccMyInteger));


}
void sender_RI_w
      (const asn1SccMyInteger *IN_varw);
void sender_RI_w
      (const asn1SccMyInteger *IN_varw)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to receiver (corresponding PI: w)
         printf ("INNER_RI: sender,receiver,w,w,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_sender_w
     (void *, size_t);

   vm_sender_w
     ((void *)IN_varw, sizeof(asn1SccMyInteger));


}
void sender_RI_y
      (const asn1SccMyInteger *IN_vary);
void sender_RI_y
      (const asn1SccMyInteger *IN_vary)
{
   #ifdef __unix__
      // Log MSC data on Linux when environment variable is set
      static int innerMsc = -1;
      if (-1 == innerMsc)
         innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
      if (1 == innerMsc) {
         long long msc_time = getTimeInMilliseconds();
         // Log message to receiver (corresponding PI: y)
         printf ("INNER_RI: sender,receiver,y,y,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_sender_y
     (void *, size_t);

   vm_sender_y
     ((void *)IN_vary, sizeof(asn1SccMyInteger));


}

