#include <activity.h>
#include <po_hi_task.h>
#include <po_hi_main.h>
#include <types.h>
#include <po_hi_time.h>
/**************************************************** */
/*  This file was automatically generated by Ocarina  */
/*  Working Copy from ra3c95420 */
/*  Do NOT hand-modify this file, as your             */
/*  changes will be lost when you re-run Ocarina      */
/**************************************************** */
process_package__taste_protected_object receiver_protected;
process_package__taste_protected_object sender_protected;

/*!
 * \fn __PO_HI_MAIN_TYPE __PO_HI_MAIN_NAME (void)
 * \brief Main function executed by the system
 *
 * Full function name and return types are available  in the PolyORB-HI-C 
 * runtime header files.
 */
__PO_HI_MAIN_TYPE __PO_HI_MAIN_NAME (void)
{
  
/*!
 * \var period
 * \brief Variable for task period
 *
 * This variable is used to store the valueof the period of a task when we 
 * create it. The value put in the variable is set according to AADL model 
 * description
 */
  __po_hi_time_t period;

  __po_hi_initialize_early ();
  
/*!
 * Initialize the runtime
 */
  __po_hi_initialize ();
  receiver_protected.protected_id = 0;
  sender_protected.protected_id = 1;
  
/*!
 * Store the period time for task receiver_image
 */
  __po_hi_milliseconds (&(period), 1);
  
/*!
 * Making Sporadic task
 */
  __po_hi_create_sporadic_task (n2x_partition_receiver_image_k, &(period), 1, 50000000, 0, receiver_image_job);
  
/*!
 * Store the period time for task sender_trigger
 */
  __po_hi_milliseconds (&(period), 200);
  
/*!
 * \brief Making Periodic Task sender_trigger
 *
 * Make a periodic task according to AADL model requirements. The first 
 * parameter is the task identifier defined in deployment.h 
 * (n2x_partition_sender_trigger_k) the second is the period defined in the 
 * AADL model. Third is the task priority ( 1), fourth is the stack size ( 
 * 5000 bytes) and last is the subprogram executed by the task
 */
  __po_hi_create_periodic_task (n2x_partition_sender_trigger_k, &(period), 1, 5000, 0, sender_trigger_job);
  
/*!
 * Waiting for other tasks initialization
 */
  __po_hi_wait_initialization ();
  
/*!
 * Used to switch the main task to sleep all the time
 */
  __po_hi_wait_for_tasks ();
  
/*!
 * Return Statement
 */
  return (__PO_HI_MAIN_RETURN);
}


