/* Body file for function receiver
 * Generated by TASTE on 2021-11-24 15:50:50
 * Provided interfaces : a, c, e, g, i, image, k, m, o, q, s, u, w, y
 * Required interfaces : b, d, f, h, j, l, n, p, r, t, testint, v, x, z
 * User-defined properties for this function:
 *   |_ Taste::Active_Interfaces = any
 *   |_ Taste::coordinates = 150827 3320 207484 185045
 * Timers              : 
 */
#include "receiver_vm_if.h"
#include "C_ASN1_Types.h"
#ifdef __unix__
   #include <stdio.h>
#endif




extern void init_sender(void);
extern unsigned sender_initialized;
extern void init_sender(void);
extern unsigned sender_initialized;
extern void init_sender(void);
extern unsigned sender_initialized;
extern void init_sender(void);
extern unsigned sender_initialized;
extern void init_sender(void);
extern unsigned sender_initialized;
extern void init_sender(void);
extern unsigned sender_initialized;
extern void init_sender(void);
extern unsigned sender_initialized;
extern void init_sender(void);
extern unsigned sender_initialized;
extern void init_sender(void);
extern unsigned sender_initialized;
extern void init_sender(void);
extern unsigned sender_initialized;
extern void init_sender(void);
extern unsigned sender_initialized;
extern void init_sender(void);
extern unsigned sender_initialized;
unsigned receiver_initialized = 0;
void init_receiver(void)
{
   if (0 == receiver_initialized) {
      receiver_initialized = 1;
      // Call user code startup function
      extern void receiver_startup(void);
      receiver_startup();
      // Iterate over all synchronous RIs, and call their parent's
      // init function. Multiple calls are prevented by the "init" guard.
      if (0 == sender_initialized) {
          init_sender();
      }
      if (0 == sender_initialized) {
          init_sender();
      }
      if (0 == sender_initialized) {
          init_sender();
      }
      if (0 == sender_initialized) {
          init_sender();
      }
      if (0 == sender_initialized) {
          init_sender();
      }
      if (0 == sender_initialized) {
          init_sender();
      }
      if (0 == sender_initialized) {
          init_sender();
      }
      if (0 == sender_initialized) {
          init_sender();
      }
      if (0 == sender_initialized) {
          init_sender();
      }
      if (0 == sender_initialized) {
          init_sender();
      }
      if (0 == sender_initialized) {
          init_sender();
      }
      if (0 == sender_initialized) {
          init_sender();
      }
#ifdef __unix__
      puts ("[TASTE] Initialization completed for function receiver");
#endif
      receiver_initialized = 2;
   }
}
void receiver_a
      (const char *IN_vara, size_t IN_vara_len)

{
#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: receiver,a,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void receiver_PI_a
      (const asn1SccMyInteger *);




   // Call user code
   receiver_PI_a ((asn1SccMyInteger *)IN_vara);

}
void receiver_c
      (const char *IN_varc, size_t IN_varc_len)

{
#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: receiver,c,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void receiver_PI_c
      (const asn1SccMyInteger *);




   // Call user code
   receiver_PI_c ((asn1SccMyInteger *)IN_varc);

}
void receiver_e
      (const char *IN_vare, size_t IN_vare_len)

{
#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: receiver,e,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void receiver_PI_e
      (const asn1SccMyInteger *);




   // Call user code
   receiver_PI_e ((asn1SccMyInteger *)IN_vare);

}
void receiver_g
      (const char *IN_varg, size_t IN_varg_len)

{
#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: receiver,g,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void receiver_PI_g
      (const asn1SccMyInteger *);




   // Call user code
   receiver_PI_g ((asn1SccMyInteger *)IN_varg);

}
void receiver_i
      (const char *IN_vari, size_t IN_vari_len)

{
#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: receiver,i,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void receiver_PI_i
      (const asn1SccMyInteger *);




   // Call user code
   receiver_PI_i ((asn1SccMyInteger *)IN_vari);

}
void receiver_image
      (const char *IN_img_data, size_t IN_img_data_len)

{
#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: receiver,image,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void receiver_PI_image
      (const asn1SccRawData *);




   // Call user code
   receiver_PI_image ((asn1SccRawData *)IN_img_data);

}
void receiver_k
      (const char *IN_vark, size_t IN_vark_len)

{
#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: receiver,k,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void receiver_PI_k
      (const asn1SccMyInteger *);




   // Call user code
   receiver_PI_k ((asn1SccMyInteger *)IN_vark);

}
void receiver_m
      (const char *IN_varm, size_t IN_varm_len)

{
#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: receiver,m,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void receiver_PI_m
      (const asn1SccMyInteger *);




   // Call user code
   receiver_PI_m ((asn1SccMyInteger *)IN_varm);

}
void receiver_o
      (const char *IN_varo, size_t IN_varo_len)

{
#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: receiver,o,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void receiver_PI_o
      (const asn1SccMyInteger *);




   // Call user code
   receiver_PI_o ((asn1SccMyInteger *)IN_varo);

}
void receiver_q
      (const char *IN_varq, size_t IN_varq_len)

{
#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: receiver,q,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void receiver_PI_q
      (const asn1SccMyInteger *);




   // Call user code
   receiver_PI_q ((asn1SccMyInteger *)IN_varq);

}
void receiver_s
      (const char *IN_vars, size_t IN_vars_len)

{
#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: receiver,s,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void receiver_PI_s
      (const asn1SccMyInteger *);




   // Call user code
   receiver_PI_s ((asn1SccMyInteger *)IN_vars);

}
void receiver_u
      (const char *IN_varu, size_t IN_varu_len)

{
#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: receiver,u,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void receiver_PI_u
      (const asn1SccMyInteger *);




   // Call user code
   receiver_PI_u ((asn1SccMyInteger *)IN_varu);

}
void receiver_w
      (const char *IN_varw, size_t IN_varw_len)

{
#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: receiver,w,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void receiver_PI_w
      (const asn1SccMyInteger *);




   // Call user code
   receiver_PI_w ((asn1SccMyInteger *)IN_varw);

}
void receiver_y
      (const char *IN_vary, size_t IN_vary_len)

{
#ifdef __unix__
   // Log MSC data on Linux when environment variable is set
   static int innerMsc = -1;
   if (-1 == innerMsc)
      innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
   if (1 == innerMsc) {
      long long msc_time = getTimeInMilliseconds();
      printf ("INNER_PI: receiver,y,%lld\n", msc_time);
      fflush(stdout);
  }
#endif

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void receiver_PI_y
      (const asn1SccMyInteger *);




   // Call user code
   receiver_PI_y ((asn1SccMyInteger *)IN_vary);

}

