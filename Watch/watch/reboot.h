/*
 * reboot.h
 *
 *  Created on: 22 Jun 2015
 *      Author: Indra
 */

#ifndef _WATCH_REBOOT_H_
#define _WATCH_REBOOT_H_

#include "contiki.h"
#include "window.h"
#include "grlib/grlib.h"
#include "system.h"
#include "icons.h"

uint8_t reboot_to_normal(uint8_t ev, uint16_t lparam, void* rparam);
uint8_t reboot_to_test(uint8_t ev, uint16_t lparam, void* rparam);

#endif /* _WATCH_REBOOT_H_ */
