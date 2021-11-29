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

