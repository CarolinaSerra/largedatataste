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
         PrintASN1RawData ("INNERDATA: image::RawData::img_data", IN_img_data);
         puts(""); // add newline
         // Log message to receiver (corresponding PI: image)
         printf ("INNER: sender,receiver,image,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif
   // Encode parameter img_data
   static asn1SccRawData IN_buf_img_data;
   int size_IN_buf_img_data =
      Encode_NATIVE_RawData
        ((void *)&IN_buf_img_data,
          sizeof(asn1SccRawData),
          (asn1SccRawData *)IN_img_data);
   if (-1 == size_IN_buf_img_data) {
      #ifdef __unix__
         puts ("[ERROR] ASN.1 Encoding failed in sender_RI_image, parameter img_data");
      #endif
        /* Crash the application due to message loss */
        abort();
   }


   // Call Middleware interface
   extern void vm_sender_image
     (void *, size_t);

   vm_sender_image
     ((void *)&IN_buf_img_data, (size_t)size_IN_buf_img_data);


}

