/* Body file for function sender
 * Generated by TASTE on 2021-07-29 10:22:26
 * Provided interfaces : trigger
 * Required interfaces : image
 * User-defined properties for this function:
 *   |_ Taste::Active_Interfaces = any
 *   |_ Taste::coordinates = 89677 72716 130817 101406
 * Timers              : 
 */
#include "sender_vm_if.h"
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
void sender_trigger()
{
   //  Directly call user code, no parameters to pass
   extern void sender_PI_trigger(void);
   sender_PI_trigger();
   // puts ("sender_trigger called");
}

