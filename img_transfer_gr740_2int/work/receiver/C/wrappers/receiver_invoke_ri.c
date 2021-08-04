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
         PrintASN1MyInteger ("INNERDATA: testint::MyInteger::int2", IN_int2);
         puts(""); // add newline
         // Log message to sender (corresponding PI: testint)
         printf ("INNER: receiver,sender,testint,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif
   // Encode parameter int2
   static asn1SccMyInteger IN_buf_int2;
   int size_IN_buf_int2 =
      Encode_NATIVE_MyInteger
        ((void *)&IN_buf_int2,
          sizeof(asn1SccMyInteger),
          (asn1SccMyInteger *)IN_int2);
   if (-1 == size_IN_buf_int2) {
      #ifdef __unix__
         puts ("[ERROR] ASN.1 Encoding failed in receiver_RI_testint, parameter int2");
      #endif
        /* Crash the application due to message loss */
        abort();
   }


   // Call Middleware interface
   extern void vm_receiver_testint
     (void *, size_t);

   vm_receiver_testint
     ((void *)&IN_buf_int2, (size_t)size_IN_buf_int2);


}

