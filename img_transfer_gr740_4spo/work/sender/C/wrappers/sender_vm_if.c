/* Body file for function sender
 * Generated by TASTE on 2021-11-24 12:45:20
 * Provided interfaces : b, testint, trigger
 * Required interfaces : a, image
 * User-defined properties for this function:
 *   |_ Taste::Active_Interfaces = any
 *   |_ Taste::coordinates = 89677 72716 130817 184970
 * Timers              : 
 */
#include "sender_vm_if.h"
#include "C_ASN1_Types.h"
#ifdef __unix__
   #include <stdio.h>
#endif




unsigned sender_initialized = 0;
void init_sender(void)
{
   if (0 == sender_initialized) {
      sender_initialized = 1;
      // Call user code startup function
      extern void sender_startup(void);
      sender_startup();
#ifdef __unix__
      puts ("[TASTE] Initialization completed for function sender");
#endif
      sender_initialized = 2;
   }
}
void sender_b
      (const char *IN_varb, size_t IN_varb_len)

{
#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: sender,b,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void sender_PI_b
      (const asn1SccMyInteger *);




   // Call user code
   sender_PI_b ((asn1SccMyInteger *)IN_varb);

}
void sender_testint
      (const char *IN_int2, size_t IN_int2_len)

{
#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: sender,testint,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void sender_PI_testint
      (const asn1SccMyInteger *);




   // Call user code
   sender_PI_testint ((asn1SccMyInteger *)IN_int2);

}
void sender_trigger()
{
#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: sender,trigger,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Directly call user code, no parameters to pass
   extern void sender_PI_trigger(void);
   sender_PI_trigger();
   // puts ("sender_trigger called");
}

