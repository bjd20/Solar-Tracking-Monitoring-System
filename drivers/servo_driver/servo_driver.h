/*
 * servo_driver.h
 *
 *  Created on: Aug 21, 2023
 *      Author: bhask
 */

#ifndef DRIVERS_SERVO_DRIVER_SERVO_DRIVER_H_
#define DRIVERS_SERVO_DRIVER_SERVO_DRIVER_H_

void init();
void pingAll();
int activeID();
int activeSpeed();
int set_Speed(int s);




#endif /* DRIVERS_SERVO_DRIVER_SERVO_DRIVER_H_ */
