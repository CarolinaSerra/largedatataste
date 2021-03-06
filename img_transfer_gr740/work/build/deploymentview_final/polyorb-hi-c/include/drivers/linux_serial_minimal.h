/*
 * This is a part of PolyORB-HI-C distribution, a minimal
 * middleware written for generated code from AADL models.
 * You should use it with the Ocarina toolsuite.
 *
 * For more informations, please visit http://taste.tuxfamily.org/wiki
 *
 * Copyright (C) 2010-2014 ESA & ISAE.
 */

#include <deployment.h>

#ifndef __PO_HI_DRIVER_LINUX_SERIAL_MINIMAL_H__
#define __PO_HI_DRIVER_LINUX_SERIAL_MINIMAL_H__

#if defined __PO_HI_NEED_DRIVER_LINUX_SERIAL_MINIMAL

void __po_hi_c_driver_linux_serial_minimal_poller (const __po_hi_device_id dev_id);

void __po_hi_c_driver_linux_serial_minimal_init (__po_hi_device_id id);

int  __po_hi_c_driver_linux_serial_minimal_sender (__po_hi_task_id task, __po_hi_port_t port);

#endif

#endif
