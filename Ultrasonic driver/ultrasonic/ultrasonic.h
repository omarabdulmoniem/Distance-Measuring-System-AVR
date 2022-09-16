/*
 * ultrasonic.h
 *
 *  Created on: Feb 23, 2022
 *      Author: pc
 */

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include "std_types.h"


#define TRIGGER_PIN PB5
#define ECHO_PIN PD6



void Ultrasonic_init(void);

void Ultrasonic_Trigger(void);

uint16 Ultrasonic_readDistance(void);

void Ultrasonic_edgeProcessing(void);

#endif /* ULTRASONIC_H_ */
