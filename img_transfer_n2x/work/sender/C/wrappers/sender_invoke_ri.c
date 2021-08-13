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
         // PrintASN1RawData ("INNERDATA: image::RawData::img_data", IN_img_data);
         // puts("");
         // Log message to receiver (corresponding PI: image)
         printf ("INNER_RI: sender,receiver,image,%lld\n", msc_time);
         fflush(stdout);
      }
   #endif


   // Send the message via the middleware API
   extern void vm_sender_image
     (void *, size_t);

   vm_sender_image
     ((void *)IN_img_data, sizeof(asn1SccRawData));


}

